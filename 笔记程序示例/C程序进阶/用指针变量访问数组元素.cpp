#include<iostream>
using namespace std;
int main()
{
  int a[5]={10,11,12,13,14};
  int *p=NULL;
  cout<<a<<endl;//首先打印出数组的起始地址，首元素的地址
  p=a;//赋值给p
  cout<<p<<endl;//p=a
  cout<<*p<<endl;//打印a[0]
  cout<<*p++<<endl;//考虑运算符优先级，++高，打印出a[0]的值，再指向a[1]
  cout<<*p++<<endl;//打印a[1],再指向a[2]
  return 0;
}
