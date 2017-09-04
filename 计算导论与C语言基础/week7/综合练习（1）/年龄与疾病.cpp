#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,age;
    double sum1,sum2,sum3,sum4;
    sum1=sum2=sum3=sum4=0;
    double s1,s2,s3,s4;
    s1=s2=s3=s4=0;
    n=age=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>age;
        if(age<=18)
        {
            sum1++;
        }
        else if(age<=35)
        {
            sum2++;
        }
        else if(age<=60)
        {
            sum3++;
        }
        else
        {
            sum4++;
        }
    }
    s1=sum1/n;
    s2=sum2/n;
    s3=sum3/n;
    s4=sum4/n;
    cout<<"1-18: "<<fixed<<setprecision(2)<<s1*100<<"%"<<endl;
    cout<<"19-35: "<<fixed<<setprecision(2)<<s2*100<<"%"<<endl;
    cout<<"36-60: "<<fixed<<setprecision(2)<<s3*100<<"%"<<endl;
    cout<<"60-: "<<fixed<<setprecision(2)<<s4*100<<"%"<<endl;
    return 0;
}
