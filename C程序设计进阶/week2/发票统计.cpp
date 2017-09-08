#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int id,n;//学号和发票数
  char type;
  float money=0,personcost[3]={0},typecost[3]={0};
  for(int i=0;i<3;i++)
  {
    cin>>id>>n;
    for(int i=0;i<n;i++)
    {
      cin>>type>>money;
      personcost[id-1]=personcost[id-1]+money;
      if(type=='A') typecost[0]=typecost[0]+money;
      if(type=='B') typecost[1]=typecost[1]+money;
      if(type=='C') typecost[2]=typecost[2]+money;
    }
  }
  for(int i=0;i<3;i++)
  {
    cout<<i+1<<' '<<fixed<<setprecision(2)<<personcost[i]<<endl;
  }
  for(int i=0;i<3;i++)
  {
    if(i==0) type='A';
    if(i==1) type='B';
    if(i==2) type='C';
    cout<<type<<' '<<fixed<<setprecision(2)<<typecost[i]<<endl;
  }
  return 0;
}
