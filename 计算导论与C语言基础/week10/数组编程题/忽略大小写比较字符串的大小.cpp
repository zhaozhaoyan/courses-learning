#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[80],s2[80],result,a;
    cin.getline(s1,80);
    cin.getline(s2,80);
    for(int i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='A'&&s1[i]<='Z')
            s1[i]=s1[i]+32;
    }
    for(int i=0;s2[i]!='\0';i++)
    {
        if(s2[i]>='A'&&s2[i]<='Z')
            s2[i]=s2[i]+32;
    }
    result=strcmp(s1,s2);
    if(result>0) cout<<">"<<endl;
    else if(result<0) cout<<"<"<<endl;
    else  cout<<"="<<endl;
    return 0;
}
