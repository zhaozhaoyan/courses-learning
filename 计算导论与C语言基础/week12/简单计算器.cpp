#include<iostream>
using namespace std;
int main()
{
    int a,b,result;
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
            case'+':result=a+b;cout<<result<<endl;break;
            case'-':result=a-b;cout<<result<<endl;break;
            case'*':result=a*b;cout<<result<<endl;break;
            case'/':result=a/b;cout<<result<<endl;break;
        }
    }
    return 0;
}
