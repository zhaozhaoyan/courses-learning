#include<iostream>
#include<stdlib.h>
using namespace std;
//Teacher类
//数据成员：名字，年龄，性别
//成员函数：数据成员的封装函数，授课teach
class Teacher
{
public:
  void setName(string _name);
  string getName();
  void setGender(string _gender);
  string getGender();
  void setAge(int _age);
  int getAge();
  void teach();
private:
  string m_strName;
  string m_strGender;
  int m_iAge;
};
//类外定义
//名字
void Teacher::setName(string _name)
{
  m_strName=_name;
}
string Teacher::getName()
{
  return m_strName;
}
//年龄
void Teacher::setGender(string _gender)
{
  m_strGender=_gender;
}
string Teacher::getGender()
{
  return m_strGender;
}
//性别
void Teacher::setAge(int _age)
{
  m_iAge=_age;
}
int Teacher::getAge()
{
  return m_iAge;
}
//授课teach
void Teacher::teach()
{
  cout<<"现在上课"<<endl;
}
int main()
{
  Teacher t;
  t.setName("孔子");
  t.setGender("男");
  t.setAge(30);
  cout<<t.getName()<<" "<<t.getAge()<<" "<<t.getGender()<<" ";
  t.teach();
  cout<<endl;
  return 0;
}
