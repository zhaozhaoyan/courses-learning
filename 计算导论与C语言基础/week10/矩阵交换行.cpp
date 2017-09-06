#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int jz[5][5],jz1[1][5]={0};
    int n,m ;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>jz[i][j];
        }
    }
    cin>>n>>m;
    if(n>4||m>4||n<0||m<0)
    {
        cout<<"error"<<endl;
    }
    else
    {
        for(int j=0;j<5;j++)
        {
            jz1[0][j]=jz[n][j];
            jz[n][j]=jz[m][j];
            jz[m][j]=jz1[0][j];
        }
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<setw(4)<<jz[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
