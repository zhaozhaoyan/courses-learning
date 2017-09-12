#include<iostream>
using namespace std;
int main()
{
  int row,col;
  cin>>row>>col;
  int array[100][100]={0};
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      cin>>array[i][j];
    }
  }
  for(int i=0;i<(row+col-1);i++)//从每个的打印输出的坐标位置找规律
  {
    for(int j=0;j<row&&j<=i;j++)
    {
      if(i-j<col&&i-j>=0)
      cout<<array[j][i-j]<<endl;
    }
  }
  return 0;
}
