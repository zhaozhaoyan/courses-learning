#include<iostream>
using namespace std;
int main()
{
  int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  cout<<"  a="<<a<<endl;//a是数组名，指向第一个小数组的指针，打印第一个元素的地址
  cout<<"&a[0]="<<&a[0]<<endl<<endl;//打印第一个元素的地址

  cout<<"  a+1="<<a+1<<endl;//跨过第一个小数组，打印第二行的5的地址
  cout<<"&a[0]+1="<<&a[0]+1<<endl<<endl;//打印5元素的地址

  cout<<"  *a="<<*a<<endl;//a是指向小数组的指针，降一级，打印1的地址
  cout<<" a[0]="<<a[0]<<endl;//打印1
  cout<<"&a[0][0]="<<&a[0][0]<<endl<<endl;//第一个元素的地址

  cout<<"  *a+1="<<*a+1<<endl;//打印2的地址
  cout<<" a[0]+1="<<a[0]+1<<endl;打印2
  cout<<"&a[0][0]+1="<<&a[0][0]+1<<endl<<endl;//第二个元素的地址
  return 0;
}
