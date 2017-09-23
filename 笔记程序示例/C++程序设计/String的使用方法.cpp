#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
  string name;
  cout<<"Please input your name:";
  getline(cin,name);
  if(name.empty()){
    cout<<"Input is null..."<<endl;
    return 0;
  }
  if(name=="imooc")
  {
    cout<<"You are a administraor"<<endl;
  }
  cout<<"Hello "+name<<endl;
  cout<<"Your name length :"<<name.size()<<endl;//字符串，但是长度不会是，用+号这样连接有问题
  cout<<"Your name first letter is:"<<name[0]<<endl;
  return 0;
}
