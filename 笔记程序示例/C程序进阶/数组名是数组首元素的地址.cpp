#include<iostream>
using namespace std;
int main()
{
  int a[5]={10,11,12,13,14};
  cout<<a<<endl;//0017F754 a是一个地址
  cout<<*a<<endl;// *a相当于打印输出a[0]
  cout<<&a[0]<<endl;//0017F754
  cout<<a[0]<<endl;//打印出10
  return 0;
}
