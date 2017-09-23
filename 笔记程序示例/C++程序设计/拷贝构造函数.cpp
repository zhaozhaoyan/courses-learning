#include<iostream>
#include<string>
using namespace std;
//Teacher类
//自定义拷贝构造函数
//数据：名字，年龄
//成员函数：数据成员的封装函数
class Teacher
{
public:
  //声明有参默认构造函数
  Teacher(string _name="Jim",int _age=1);
  Teacher(const Teacher & tea);
  void setName(string _name);
  string getName();
  void setAge(int _age);
  int getAge();
private:
  string m_strName;
  int m_iAge;
};
Teacher::Teacher(string _name,int _age):m_strName(_name),m_iAge(_age)
{
  cout<<"Teacher(string _name,int _age)"<<endl;
}
//拷贝构造函数
Teacher::Teacher(const Teacher &tea)
{
  cout<<"Teacher(const Teacher &tea)"<<endl;
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
void test(Teacher t)
{

}
int main()
{
  Teacher t1;
  test(t1);
  return 0;
}
