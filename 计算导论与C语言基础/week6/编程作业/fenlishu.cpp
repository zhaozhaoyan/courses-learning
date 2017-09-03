#include<iostream>
using namespace std;
int main()
{
    int m,b,s,g;
    cin>>m;
    b=m/100;
    s=(m-b*100)/10;
    g=m-b*100-s*10;
    cout<<b<<endl;
    cout<<s<<endl;
    cout<<g<<endl;
    return 0;
}
