#include<iostream>
using namespace std;
int *getInt1()
{
  static int value1=20;//静态局部
  return &value1;
}
int *getInt2()
{
  static int value2=30;//静态局部
  return &value2;
}
int main()
{
  int *p,*q;
  p=getInt1();
  q=getInt2();
  cout<<*p<<endl;
  return 0;
}
