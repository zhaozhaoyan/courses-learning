#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//Teacher类
//自定义无参构造函数
//自定义有参构造函数
//数据：名字，年龄
//成员函数：数据成员的封装函数
class Teacher
{
public:
  //声明构造函数
  Teacher();
  Teacher(string _name,int _age);
  void setName(string _name);
  string getName();
  void setAge(int _age);
  int getAge();
private:
  string m_strName;
  int m_iAge;
};
//无参构造函数
Teacher::Teacher()
{
  m_strName="Jim";
  m_iAge=5;
  cout<<"Teacher()"<<endl;
}
//有参构造函数
Teacher::Teacher(string _name,int _age=20)
{
  m_strName=_name;
  m_iAge=_age;
  cout<<"Teacher(string _name,int _age)"<<endl;
}
//数据成员的封装函数
void Teacher::setName(string _name)
{
  m_strName=_name;
}
string Teacher::getName()
{
  return m_strName;
}
//
void Teacher::setAge(int _age)
{
  m_iAge=_age;
}
int Teacher::getAge()
{
  return m_iAge;
}
//
int main()
{
  Teacher t1;
  Teacher t2("Merry",15);
  Teacher t3("James");//默认20

  cout<<t1.getName()<<" "<<t1.getAge()<<endl;//通过初始化实现
  cout<<t2.getName()<<" "<<t2.getAge()<<endl;//通过传参实现
  cout<<t3.getName()<<" "<<t3.getAge()<<endl;//可以使用默认值
  //如果给名字也赋默认值，计算机无法分辨调用哪个构造函数

  return 0;
}
