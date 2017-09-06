#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int num1[n],num2[n];
    for(int i=0;i<n;i++)
    {
        cin>>num1[i];
        num2[i]=num1[i];
    }
    for(int i=0;i<m;i++)
    {
        num1[i]=num2[n-m+i];
    }
    for(int i=m;i<n;i++)
    {
        num1[i]=num2[i-m];
    }
    for(int i=0;i<n;i++)
    {
        cout<<num1[i]<<' ';
    }
    cout<<endl;
    return 0;
}
