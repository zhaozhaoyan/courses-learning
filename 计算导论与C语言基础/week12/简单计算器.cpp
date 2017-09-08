#include<iostream>
using namespace std;
int main()
{
    int a,b,r;
    cin>>a>>b;
    char c;
    cin>>c;
    if((c=='/')&&(b==0))
    {
        cout<<"Divided by zero!"<<endl;
    }
    if((c!='+')&&(c!='-')&&(c!='*')&&(c!='/'))
    {
        cout<<"Invalid operator"<<endl;
    }
    else
    {
        switch(c)
        {
            case'+':r=a+b;cout<<r<<endl;break;
            case'-':r=a-b;cout<<r<<endl;break;
            case'*':r=a*b;cout<<r<<endl;break;
            case'/':r=a/b;cout<<r<<endl;break;
        }
    }
    return 0;
}
