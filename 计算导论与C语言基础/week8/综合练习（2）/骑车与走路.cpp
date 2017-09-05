#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int meter[n];
    double t1,t2;
    for(int i=0;i<n;i++)
    {
       cin>>meter[i];
    }
    for(int i=0;i<n;i++)
    {
       t1=(double)meter[i]/1.2;
       t2=(double)50+(double)meter[i]/3.0;
       //强制类型转换
       if(t1>t2)
        cout<<"Bike"<<endl;
       else if(t1<t2)
        cout<<"Walk"<<endl;
       else cout<<"All"<<endl;
    }
    return 0;
}
