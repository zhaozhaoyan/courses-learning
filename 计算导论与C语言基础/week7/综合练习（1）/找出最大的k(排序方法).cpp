#include<iostream>
using namespace std;
int main()
{
    int n=0,k=0;
    int a[100]={0};
    cin>>n>>k;
    for(int i=0,m=0;i<n;i++)
    {
        cin>>m;
        a[i]=m;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int t=0;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<a[k-1]<<endl;
    return 0;
}
//在对整数排序的情况下找出的第k大个数
