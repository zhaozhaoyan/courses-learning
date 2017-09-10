#include<iostream>
using namespace std;
int main()
{
  int a=256;
  int *p=&a;//const int *p=&a，
  *p=257;//报出一个错误，*p不允许修改的，不能通过p修改指向的东西了
  cout<<*p<<endl;
  return 0;
}
