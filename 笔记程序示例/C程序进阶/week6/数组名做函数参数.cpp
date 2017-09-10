#include<iostream>
using namespace std;
void sum(int *p,int n)
{
  int tota=0;
  for(int i=0;i<n;i++)
  {
    tota+=*p++;
  }
  cout<<tota<<endl;
}
int main()
{
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  sum(a,10);
  return 0;
}
