#include<iostream>
using namespace std;
int value1=20;
int value2=30;//变成了全局变量，一直持续到整个文件的最后
int *getInt1()
{
  return &value1;
}
int *getInt2()
{
  return &value2;
}
int main()
{
  int *p,*q;
  p=getInt1();
  q=getInt2();
  cout<<*p<<endl;
  return 0;//返回的值大多是30，返回的值也是很不稳定的，当从函数返回指针的时候，请你确保指针是有意义的，必须指向一片有意的内存空间
}
