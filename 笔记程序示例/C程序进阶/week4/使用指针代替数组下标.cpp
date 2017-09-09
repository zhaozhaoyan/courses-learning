#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int a[10],i;//int a[10],i,*p=a;
  for(i=0;i<10;i++)//
  cin>>a[i];//cin>>*p++;
  for(i=9;i>=0;i--)//for(p--;p>=a)
  cout<<setw(3)<<a[i];//cout<<setw(3)<<*p--;
  return 0;
}
