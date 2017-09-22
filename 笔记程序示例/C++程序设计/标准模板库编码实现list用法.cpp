#include<iostream>
#include<stdlib.h>
#include<vector>
#include<list>
#include<map>
//通过使用标准模板库，学习list用法
using namespace std;
int main()
{
  list<int>list1;
  list1.push_back(4);
  list1.push_back(7);
  list1.push_back(10);
  /*for(int i=0;i<list1.size();i++)
  {
    cout<<list1[i]<<endl;
  }*/    //有误，必须使用迭代器进行访问
  list<int>::iterator itor=list1.begin();
  for(;itor!=list1.end();itor++)
  {
    cout<<*itor<<endl;//遍历list数组
  }
  return 0;
}
