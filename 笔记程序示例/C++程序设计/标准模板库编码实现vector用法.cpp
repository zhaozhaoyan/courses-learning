#include<iostream>
#include<stdlib.h>
#include<vector>
#include<list>
#include<map>
//通过使用标准模板库，学习vector用法
using namespace std;
int main()
{
  vector<int>vec;
  vec.push_back(3);//从当前向量的尾部插入的
  vec.push_back(4);
  vec.push_back(6);
  //vec.pop_back();//将尾部的元素删除了
  //cout<<vec.size()<<endl;
/*for(int i=0;i<vec.size();i++)//遍历数组
{
  cout<<vec[i]<<endl;
}*/
/*vector<int>::iterator itor=vec.begin();
//cout<<*itor<<endl;//通过指针打印
for(;itor!=vec.end();itor++)//初始条件就是 =vec.begin()//最后一个元素的下一个位置
{
  cout<<*itor<<endl;
}*/
cout<<vec.front()<<endl;//第一个数据
cout<<vec.back()<<endl;//最后一个数据
  return 0;
}
