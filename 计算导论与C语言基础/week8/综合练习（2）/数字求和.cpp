#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    int n[5];
    cin>>a;
    for(int i=0;i<5;i++)
    {
        cin>>n[i];
        if(n[i]<a)
        {
            sum=sum+n[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}
