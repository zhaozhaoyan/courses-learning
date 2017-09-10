#include<iostream>
using namespace std;
int sum(const int array[],int n)//加了一个关键字，
{
  for(int i=0;i<10-1;i++)
  {
    *(array+1)=*array+*(array+1);//此句程序有错误，“array”不能给常量赋值
    array++;
  }
  return *array;
}
int main()
{
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  cout<<sum(a,10);
  return 0;
}
