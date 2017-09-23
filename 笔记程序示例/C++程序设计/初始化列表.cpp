#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//Teacher类
//自定义有参默认构造函数
//使用初始化列表初始化数据
//数据：名字，年龄
//成员函数：数据成员的封装函数
//拓展：定义可以带最多学生的个数，此为常量
class Teacher
{
public:
  //声明有参默认构造函数
  Teacher(string _name="Jim",int _age=1,int m=100);
  void setName(string _name);
  string getName();
  void setAge(int _age);
  int getAge();
  int getMax();
private:
  string m_strName;
  int m_iAge;
  const int m_iMax;
};
//有参构造函数
/*Teacher::Teacher(string _name,int _age)
{
  m_strName=_name;
  m_iAge=_age;
  cout<<"Teacher(string _name,int _age)"<<endl;
}*/
//使用初始化列表
Teacher::Teacher(string _name,int _age,int m):m_strName(_name),m_iAge(_age),m_iMax(m)
{
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
int Teacher::getMax()
{
  return m_iMax;
}
int main()
{
  Teacher t1;
  Teacher t2("Merry",12,150);
  cout<<t1.getName()<<" "<<t1.getAge()<<endl;
  cout<<t2.getName()<<" "<<t2.getAge()<<" "<<t2.getMax()<<endl;
  return 0;
}
