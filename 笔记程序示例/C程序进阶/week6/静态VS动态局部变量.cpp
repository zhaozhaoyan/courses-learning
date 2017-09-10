#include<iostream>
using namespace std;
void function()
{
  int a=0;//动态变量a的范围是函数function内
  static int b=0;//静态变量b的有效范围是整个程序
  a=a+1;
  b=b+1;
  cout<<"a= "<<a<<endl;
  cout<<"b= "<<b<<endl;
}
int main()
{
  for(int i=0;i<5;i++)
  {
    function();
    cout <<"Call Again!"<<endl;;
  }//虽然函数被调用了很多次，但是b是静态局部变量，b的值已经存在，不需要执行那一句程序
}
