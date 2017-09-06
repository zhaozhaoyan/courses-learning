#include<iostream>
using namespace std;
int main()
{
    int n=0,t=0,result=0;
    int num[n];
    cin>>n;
    if(n!=0)
    {
       for(int i=0;i<n;i++)
       {
           cin>>num[i];
       }
       for(int i=0;i<n-1;i++)
       {
           for(int j=1+i;j<n;j++)
           {
               if(num[i]>num[j])
               {
                   t=num[i];
                   num[i]=num[j];
                   num[j]=t;
               }
           }
       }
       if(n==1)
       {
          cout<<num[0]<<endl;
       }
       else
       {
           if(n%2==0)
           {
               result=(num[n/2]+num[n/2-1])/2;
           }
           else
           {
               n=(n-1)/2;
               result=num[n];
           }
       }
    }
    cout<<result<<endl;
    return 0;
}
