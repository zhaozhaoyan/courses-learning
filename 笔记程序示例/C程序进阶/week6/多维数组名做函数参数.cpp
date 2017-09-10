#include<iostream>
using namespace std;
int maxvalue(int (*p)[4])//定义了变量p，p和a的含义一样，a是指向二维数组中第一个小数组的指针
{
  int max=p[0][0];
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(p[i][j]>max)
      max=p[i][j];
    }
  }
  return max;
}
int main()
{
  int a[3][4]={{1,3,5,7},{9,10,13,15},{2,4,6,8}};
  cout<<"The Max value is "<<maxvalue(a)<<endl;;
  return 0;
}
