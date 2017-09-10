#include<iostream>
using namespace std;
int *getInt1()
{
  int value1=20;//局部变量
  return &value1;
}
int *getInt2()
{
  int value2=30;//局部变量
  return &value2;
}
int main()
{
  int *p,*q;
  p=getInt1();
  q=getInt2();
  cout<<*p<<endl;
  return 0;//返回的值大多是30，返回的值也是很不稳定，当从函数返回指针的时候，请你确保指针是有意义的，必须指向一片有意的内存空间
}
