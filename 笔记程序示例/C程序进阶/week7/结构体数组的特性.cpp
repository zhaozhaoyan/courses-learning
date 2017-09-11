#include<iostream>
using namespace std;
struct student
{
  int id_num;
  char name[10];
};
int main()
{
  student myclass[3]={123,{'m','i','k','e','\0'},133,{'t','o','m','\0'},143,{'j','a','c','k','\0'}};
  student *one=myclass;//数组名相当于指向数组第一个元素的指针
  cout<<one->id_num<<" "<<one->name<<endl;
  one++;//指向元素的指针++，则跨过一整个结构体
  cout<<one->id_num<<" "<<one->name<<endl;
  return 0;
}
