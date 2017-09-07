#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[14],substr[4];
    int len,max=0,n=0;
    while(cin>>str>>substr)
    {
        len=strlen(str);
        max=str[0];
        for(int i=0;i<len;i++)
        {
            if(str[i]>max)
            {
                max=str[i];
                n=i;
            }
        }
        for(int i=len+3;i>=n+4;i--)
        {
            str[i]=str[i-3];
        }
        //将substr插在str最大字符之后
        for(int i=0;i<3;i++)
        {
            str[n+i+1]=substr[i];
        }
        cout<<str<<endl;
    }
    return 0;
}
