#include<iostream>
using namespace std;
int main()
{
  int m,n;
  cin>>m>>n;
  int a[m][n];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      int flag=1;//把小于的情况全部排除，因为小于的情况有一个，则不输出，是或的关系
      if(flag==1&&i-1>=0)
      {
        if(a[i][j]<a[i-1][j])//上
        {
          flag=0;
        }
      }
      if(flag==1&&i+1<m)
      {
        if(a[i][j]<a[i+1][j])//下
        {
          flag=0;
        }
      }
      if(flag==1&&j-1>=0)
      {
        if(a[i][j]<a[i][j-1])//左
        {
          flag=0;
        }
      }
      if(flag==1&&j+1<n)
      {
        if(a[i][j]<a[i][j+1])//右
        {
          flag=0;
        }
      }
      if(flag==1)
      {
        cout<<i<<" "<<j<<endl;
      }
    }
  }
  return 0;
}
