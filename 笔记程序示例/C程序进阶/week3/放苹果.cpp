#include<iostream>//5 1 1 和 1 5 1是同一种放法
using namespace std;//f(m,n)
int count(int m,int n)
{
  if(m<=1||n<=0)  return 1;
  if(m<n)  return count(m,m);
  else  return count(m,n-1)+count(m-n,n);
}
int main()
{
  int apples,plates;
  cin>>apples>>plates;
  cout<<count(apples,plates)<<endl;
  return 0;
}
