#include<iostream>
#include<stdlib.h>
using namespace std;
//动态多态，虚函数
//要求：1.定义Shape类，成员函数：calcArea()，构造函数，析构函数
//     2.定义Rect类，成员函数:calcArea()，构造函数，析构函数
//                 数据成员：m_dWidth,m_dHeight
//     3.定义Circle类，成员函数:calcArea()，构造函数，析构函数
//                 数据成员：m_dR
//     4.定义Coordinate类，成员函数，构造函数，析构函数
//                数据成员：m_iX,m_iY
class Shape
{
  public:
    Shape();
    virtual ~Shape();//虚析构函数，避免内存泄漏，记得把其他的也加上
    virtual double calcArea();//实现了多态，注意要在其他两个也加上virtual关键字
};
Shape::Shape()//构造函数
{
  cout<<"Shape()"<<endl;
}
Shape::~Shape()//析构函数
{
  cout<<"~Shape()"<<endl;
}
double Shape::calcArea()
{
  cout<<"Shape->calcArea()"<<endl;
  return 0;//必须有返回值，没有的话写0
}
//Coordinate类
class Coordinate
{
public:
  Coordinate(int x,int y);
  ~Coordinate();
private:
  int m_iX;
  int m_iY;
};
Coordinate::Coordinate(int x,int y)
{
  cout<<"Coordinate"<<endl;
  m_iX=x;
  m_iY=y;
}
Coordinate::~Coordinate()
{
  cout<<"Coordinate"<<endl;
}
//Circle类
class Circle:public Shape
{
public:
  Circle(double r);
  ~Circle();
  virtual double calcArea();
protected:
  double m_dR;
  Coordinate *m_pCenter;
};
Circle::Circle(double r)
{
  cout<<"Circle()"<<endl;
  m_dR=r;
  m_pCenter=new Coordinate(3,5);
}
Circle::~Circle()
{
  cout<<"~Circle()"<<endl;
  delete m_pCenter;
  m_pCenter=NULL;
}
double Circle::calcArea()
{
  cout<<"Circle->calcArea()"<<endl;
  return 3.14*m_dR*m_dR;
}
//Rect类
class Rect:public Shape
{
public:
  Rect(double width,double height);
  ~Rect();
  virtual double calcArea();
protected:
  double m_dWidth;
  double m_dHeight;
};
Rect::Rect(double width,double height)
{
  cout<<"Rect()"<<endl;
  m_dHeight=height;
  m_dWidth=width;
}
Rect::~Rect()
{
  cout<<"~Rect()"<<endl;
}
double Rect::calcArea()
{
  cout<<"Rect->calcArea()"<<endl;
  return m_dWidth*m_dHeight;
}
int main()
{
  Shape *shape1=new Rect(3,6);
  Shape *shape2=new Circle(5);
  shape1->calcArea();
  shape2->calcArea();
  delete shape1;
  shape1=NULL;
  delete shape2;
  shape2=NULL;
  return 0;
}
