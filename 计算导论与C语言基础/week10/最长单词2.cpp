#include<iostream>
using namespace std;
int main()
{
    char s[500];
    cin.getline(s,500);
    int len=0,len1=0,best=0,best1=0;
    for(int i=0;s[i]!='.';i++)
    {
        if(s[i]!=' ')
        {
            len1++;
        }
        else
        {
            if(len1>len)
            {
                len=len1;
                best=best1;
            }
            best1=i+1;
            len1=0;
        }
    }
    if(len1>len)
    {
        best=best1;
    }
    for(best;s[best]!=' '&&s[best]!='.';best++)
    {
        cout<<s[best];
    }
    return 0;
}
