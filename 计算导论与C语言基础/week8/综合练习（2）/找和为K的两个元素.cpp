#include<iostream>
using namespace std;
int main()
{
    int n,k,sum,K=0;
    cin>>n>>k;
    int N[1000];
    for(int i=0;i<n;i++)
    {
        cin>>N[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=N[i]+N[j];
            if(sum==k)
            {
                K++;
            }
        }
    }
    if(K>0)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    return 0;
}
