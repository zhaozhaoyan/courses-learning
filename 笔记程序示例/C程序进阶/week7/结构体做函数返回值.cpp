#include<iostream>
using namespace std;
struct student
{
  int id_num;
  char name[10];
};
student newone()
{
  student one={20130123,{'M','I','K','E','\0'}};
  return one;//把one copy一个副本，把副本返回给main函数
}
int main()
{
  student mike=newone();//调用newone
  cout<<mike.id_num<<" "<<mike.name<<endl;//copy一个副本，把这个副本返回给main函数
  return 0;//结构体做返回值相当于copy一份给调用者
}
