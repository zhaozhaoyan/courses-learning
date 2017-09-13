#include<iostream>
#include<iomanip>
using namespace std;
void sick(int *p,float *q,float a,int m)//编号，患病程度，最低严重值，总人数
{
  int tp=0,num=0;//超过最低严重值的人数
  float tq;
  for(int i=0;i<m-1;i++)
  {
    for(int j=i+1;j<m;j++)
    {
      if(*(q+j)>*(q+i))
      {
        tq=*(q+i);
        *(q+i)=*(q+j);
        *(q+j)=tq;//患病程度排序，
        tp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=tp;//编号也重新排序
      }
    }
  }
  //然后再将超过严重最低值的挑出来
  for(int i=0;i<m;i++)
  {
    if(*(q+i)>a)//输出超过最低严重值 的编号及患病程度
    {
      cout<<setfill('0')<<setw(3)<<*(p+i)<<" "<<fixed<<setprecision(1)<<*(q+i)<<endl;//注意空格
      num++;
    }
  }
  if(num==0) cout<<"None."<<endl;
}
int main()
{
  int m, a[50],x;
  float b[50],y,level;//程度
  cin>>m>>level;
  for(int i=0;i<m;i++)
  {
    cin>>x>>y;//输入编号和患病程度
    a[i]=x;//编号赋值给数组a
    b[i]=y;//患病程度给数组b
  }
  sick(a,b,level,m);
  return 0;
}
