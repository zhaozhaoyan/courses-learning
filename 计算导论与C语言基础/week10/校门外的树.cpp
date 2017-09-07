#include<iostream>
using namespace std;
int main()
{
    int l,m,tree=0,start,end;
    cin>>l>>m;
    int L[10001];
    for(int i=0;i<=l;i++)
    {
        L[i]=1;
    }
    for(int i=0;i<m;i++)
    {
        cin>>start>>end;
        for(int j=start;j<=end;j++)
        {
            L[j]=0;
        }
    }
    for(int i=0;i<=l;i++)
    {
        if(L[i]==1)
        {
            tree++;
        }
    }
    cout<<tree<<endl;
    return 0;
}
