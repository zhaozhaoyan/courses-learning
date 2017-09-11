#include<iostream>
using namespace std;
//1,1,2,3,5,8,13,21,34,55,89,144
int f(int n)
{
  if(n==1) return 1;
  if(n==2) return 1;
  else return(f(n-1)+f(n-2));
}
int main()
{
  int n;
  cin>>n;
  cout<<f(n)<<endl;//数列的第n个数是多少
  return 0;
}
