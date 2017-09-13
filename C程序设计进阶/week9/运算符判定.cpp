#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  char dou1,dou2;
  cin>>a>>dou1>>b>>dou2>>c;
  if(a+b==c)
  {
    cout<<"+"<<endl;
  }
  else if(a-b==c)
  {
    cout<<"-"<<endl;
  }
  else if(a*b==c)
  {
    cout<<"*"<<endl;
  }
  else if(a/b==c)
  {
    cout<<"/"<<endl;
  }
  else if(a%b==c)
  {
    cout<<"%"<<endl;
  }
  else
  {
    cout<<"error"<<endl;
  }
  return 0;
}
