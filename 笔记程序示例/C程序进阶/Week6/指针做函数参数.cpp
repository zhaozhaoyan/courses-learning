#include<iostream>
using namespace std;
void Rank(int *q1,int *q2)
{
  int temp;
  if(*q1<*q2)
  {
    temp=*q1;
    *q1=*q2;
    *q2=temp;
  }
}
int main()
{
  int a,b,*p1,*p2;
  cin>>a>>b;
  p1=&a;//分别指向这两个值a，b
  p2=&b;//p1,p2里面存放的是a，b的地址
  Rank(p1,p2);//函数在传递的时候是直接copy过去，让rank里面的q1和q2，指向main函数里面的a和b
  cout<<a<<" "<<b<<endl;//通过q1,q2，对a，b的任何操作，也就是对变量a和b的操作
  return 0;
}
