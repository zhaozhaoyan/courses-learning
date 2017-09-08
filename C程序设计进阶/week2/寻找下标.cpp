#include<iostream>
using namespace std;
int find(int x[],int n)
{
    int num=0,m=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]==i)
        {
           num++;
           m=x[i];
           break;
        }
    }
    if(num>=1) return m;
    else return -1;
}
int main()
{
    int x[100],n,number=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    number=find(x,n);
    if(number==-1) cout<<"N"<<endl;
    else cout<<number<<endl;
    return 0;
}
