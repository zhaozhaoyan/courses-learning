#include<iostream>
using namespace std;
int main()
{
    int n,x,y,t,s;
    cin>>n>>x>>y;
    if(y%x==0)
    {
       t=y/x;
    }
    else
    {
       t=y/x+1;
    }
    if(t>=n)
    {
       s=0;
       cout<<s<<endl;
    }
    else
    {
       s=n-t;
       cout<<s<<endl;
    }
    return 0;
}
