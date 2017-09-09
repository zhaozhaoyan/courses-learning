#include<iostream>
using namespace std;
int main()
{
  int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
  int *p;
  for(p=&a[0][0];p<&a[0][0]+12;p++)//填空对指针p赋值，填数组元素的指针
  {
    cout<<p<<" "<<*p<<endl;//p是指向数组元素的指针,用指针访问二维数组的元素（遍历）
  }
  return 0;
}
