#include,<iostream>
using namespace std;
int main()
{
  const int a=78;
  const int b=28;
  const int c=18;
  const int *pi=&a;
  *pi=58;//错误，*p不能被赋值的
  pi=&b;//正确，可以给pi重新赋值
  *pi=&b;//错误，*p不能被赋值
  pi=&c;//正确，可以给pi重新赋值
  *pi=88;//错误，*p不能被赋值
  return 0;
}
