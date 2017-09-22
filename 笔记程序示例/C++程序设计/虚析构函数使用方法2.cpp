#include<iostream>
#include<stdlib.h>
using namespace std;
//动态多态，虚函数
//要求：1.定义Shape类，成员函数：calcArea()，构造函数，析构函数
//
//     2.定义Circle类，成员函数:构造函数，析构函数
//                 数据成员：m_iR
//     概念说明：1.对象的大小：数据成员所占的数据大小
//             2.对象的地址
//             3.对象成员的地址
//             4.虚函数指针表
class Shape
{
  public:
    Shape();
    //~Shape();//虚析构函数，避免内存泄漏，记得把其他的也加上
    //double calcArea();//实现了多态，注意要在其他两个也加上virtual关键字
    virtual ~Shape();
    virtual double calcArea();
};
Shape::Shape()//构造函数
{
  //cout<<"Shape()"<<endl;
}
Shape::~Shape()//析构函数
{
  //cout<<"~Shape()"<<endl;
}
double Shape::calcArea()
{
  cout<<"Shape->calcArea()"<<endl;
  return 0;//必须有返回值，没有的话写0
}

//Circle类
class Circle:public Shape
{
public:
  Circle(int r);
  ~Circle();
protected:
  int m_iR;
};
Circle::Circle(int r)
{
  m_iR=r;
}
Circle::~Circle()
{
  //cout<<"~Circle()"<<endl;
}
int main()
{
  Shape shape;
  cout<<sizeof(shape)<<endl;
  int *p=(int *)&shape;
  //cout<<p<<endl;
  Circle circle(100);
  int *q=(int *)&circle;
  cout<<q<<endl;
  //cout<<(unsigned int)(*q)<<endl;
  cout<<sizeof(circle)<<endl;
  return 0;
}
