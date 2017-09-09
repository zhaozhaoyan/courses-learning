#include<iostream>
using namespace std;
int main()
{
  int a[5]={1,2,3,4,5};
  int *p=&a[3];
  *p=100;
  cout<<*p++<<endl;//100，注意优先级
  cout<<*p--<<endl;//5，执行--，指向a[3],
  cout<<*--p<<endl;//先执行--p，再执行*的运算
  return 0;
}
