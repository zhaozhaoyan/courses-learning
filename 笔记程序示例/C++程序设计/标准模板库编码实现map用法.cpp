#include<iostream>
#include<stdlib.h>
#include<vector>
#include<list>
#include<map>
#include<string>
//通过使用标准模板库，学习map其用法
using namespace std;
int main()
{
  /*map<int,string> m;
  pair<int,string>p1(3,"hello");
  pair<int,string>p2(6,"world");
  m.insert(p1);
  m.insert(p2);
  //cout<<m[3]<<endl;
  //cout<<m[6]<<endl;//通过key找到相应的value
  map<int,string>::iterator itor=m.begin();//迭代器
  for(;itor!=m.end();itor++)
  {
    cout<<itor->first<<endl;
    cout<<itor->second<<endl;
    cout<<endl;
  }*/
  map<string,string> m;
  pair<string,string>p1("H","hello");
  pair<string,string>p2("W","world");
  pair<string,string>p3("B","beijing");
  m.insert(p1);
  m.insert(p2);
  m.insert(p3);
  //cout<<m["H"]<<endl;
  //cout<<m["B"]<<endl;//通过key找到相应的value
  map<string,string>::iterator itor=m.begin();//迭代器
  for(;itor!=m.end();itor++)
  {
    cout<<itor->first<<endl;
    cout<<itor->second<<endl;
    cout<<endl;
  }
    return 0;
}
