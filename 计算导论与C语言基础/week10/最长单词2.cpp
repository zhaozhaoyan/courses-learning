#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[500]={},best[100]={};
    cin.getline(s,500);
    int start=0,max=0,len,end;
    len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if((s[i]==' ')||(s[i]=='.'))
        {
            end=i;
            if(max<end-start)
            {
                max=end-start;
                s[end]='\0';
                strcpy(best,&s[start]);
            }
            start=++i;
        }

    }
    cout<<best<<endl;
    return 0;
}
