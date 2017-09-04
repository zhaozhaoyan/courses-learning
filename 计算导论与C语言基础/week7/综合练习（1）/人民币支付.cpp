#include<iostream>
using namespace std;
int main()
{
    int money,sum100,sum50,sum20,sum10,sum5,sum1,t;
    cin>>money;
    sum100=money/100;
    t=money-sum100*100;
    sum50=t/50;
    t-=sum50*50;
    sum20=t/20;
    t-=sum20*20;
    sum10=t/10;
    t-=sum10*10;
    sum5=t/5;
    t-=sum5*5;
    sum1=t;
    cout<<sum100<<endl;
    cout<<sum50<<endl;
    cout<<sum20<<endl;
    cout<<sum10<<endl;
    cout<<sum5<<endl;
    cout<<sum1<<endl;
    return 0;
}
