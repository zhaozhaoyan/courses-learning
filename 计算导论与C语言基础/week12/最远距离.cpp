#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double x,y,d1,d2,d,a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        a[i]=x;
        b[i]=y;
    }
    d1=pow((a[1]-a[0]),2)+pow((b[1]-b[0]),2);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            d2=pow((a[j]-a[i]),2)+pow((b[j]-b[i]),2);
            if(d2>d1) d1=d2;
        }
    }
    d=sqrt(d1);
    cout<<fixed<<setprecision(4)<<d<<endl;
    return 0;
}
