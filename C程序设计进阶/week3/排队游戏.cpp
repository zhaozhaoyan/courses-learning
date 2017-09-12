#include<iostream>
using namespace std;
char boy;
int paidui(char str[],int s)//开始位置s
{
  int n;
  if(str[s]!=boy)
  {
    return s;
  }
  else
  {
    n=paidui(str,s+1);
    cout<<s<<' '<<n<<endl;
    return paidui(str,n+1);
  }
}
int main()
{
  char str[101]={0};
  cin>>str;
  boy=str[0];
  int n=paidui(str,1);
  cout<<"0 "<<n<<endl;
  return 0;
}
