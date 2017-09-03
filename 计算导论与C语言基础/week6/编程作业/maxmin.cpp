#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int num[6];
    for(int i=0;i<6;i++)
    cin>>num[i];
    for(int i=0;i<6;i++)
    {
        if(num[i]%2!=0)
        {
            a=num[i];
            for(int j=0;j<6;j++)
            {
                if(num[j]%2!=0&&a<=num[j])
                {
                    a=num[j];
                }
            }
        }
        if(num[i]%2==0)
        {
            b=num[i];
            for(int j=0;j<6;j++)
            {
                if(num[j]%2==0&&b>=num[j])
                {
                    b=num[j];
                }
            }
        }
    }
    if(a>b)
    cout<<a-b<<endl;
    else
    cout<<b-a<<endl;
    return 0;
}
