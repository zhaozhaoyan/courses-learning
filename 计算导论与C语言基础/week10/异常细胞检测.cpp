#include<iostream>
using namespace std;
int main()
{
    int N[100][100],n,result=0;
    int n1,n2,n3,n4;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>N[i][j];
        }
    }
    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            n1=N[i-1][j]-N[i][j];
            n2=N[i+1][j]-N[i][j];
            n3=N[i][j-1]-N[i][j];
            n4=N[i][j+1]-N[i][j];
            if(n1>=50&&n2>=50&&n3>=50&&n4>=50)
            {
                result ++;
            }
        }
    }
    cout<<result<<endl;
    return 0;
}
