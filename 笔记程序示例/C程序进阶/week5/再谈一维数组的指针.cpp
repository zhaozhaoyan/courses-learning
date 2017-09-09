#include<iostream>
using namespace std;
int main()
{
  int a[4]={1,3,5,7};
  cout<<a<<endl;//指向数组首元素
  cout<<a+1<<endl;//跨过四个字节
  cout<<&a<<endl;//指向整个数组，如果在数组名字前加一个&符号，管辖范围上升为一个数组
  cout<<&a+1<<endl;//跨过整个数组，对指针+1，跨过基类型的全部空间，
  cout<<*(&a)<<endl;//出现在*后面的，*(&a)指向数组，相当于打印a
  cout<<*(&a)+1<<endl;//跨过四个字节
  return 0;
}
