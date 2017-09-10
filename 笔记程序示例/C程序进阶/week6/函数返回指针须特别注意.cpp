#include<iostream>
using namespace std;
int *getInt1()
{
  int value1=20;//局部变量
  return &value1;
}
int main()
{
  int *p;
  p=getInt1();//p指向了value1
  cout<<*p<<endl;
  return 0;//返回的值是非常不稳定的
}
