#include<iostream>
using namespace std;
int main()
{
  int k;
  cin>>k;
  for(int i=0;i<k;i++)
  {
    int m,n;
    cin>>m>>n;
    int a[100][100]={0};
    int sum=0;
    for(int r=0;r<m;r++)//行
    {
      for(int c=0;c<n;c++)//列
      {
        cin>>a[r][c];
        if(r==0||r==m-1||c==0||c==n-1)//边缘元素之和
        {
          sum=sum+a[r][c];
        }
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}
