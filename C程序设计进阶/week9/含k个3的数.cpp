#include<iostream>
using namespace std;
int count(int m)
{
  int a[5];//m是五位数，1<m<100000,找出m总共含有几个三
  int sum=0;
  a[0]=m/10000;
  a[1]=(m%10000)/1000;
  a[2]=(m%1000)/100;
  a[3]=(m%100)/10;
  a[4]=m%10;
  for(int i=0;i<5;i++)
  {
    if(a[i]==3)
    {
      sum++;
    }
  }
  return sum;
}
int main()
{
  int m,k,sum=0;
  cin>>m>>k;
  if(m%19==0)
  {
    sum=count(m);
    if(sum==k)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
  }
  else cout<<"No"<<endl;//还有不能被19整除的情况，不要忘记
  return 0;
}
