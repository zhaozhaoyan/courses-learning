#include<iostream>
using namespace std;
int main()
{
    int m;
    double n,k,money,sum;
    while(cin>>n>>k)
    {
        money=200;
        for(int i=1;;i++)
        {
            if(i>1)
            money=money*(1+k*0.01);
            sum=n*i;
            if(sum>money&&i<=20)
            {
                m=i;
                cout<<m<<endl;
                break;
            }
            else if(i>20)
            {
                cout<<"Impossible"<<endl;
                break;
            }
        }
    }
    return 0;
}
