#include<iostream>
using namespace std;
class Complex{
    public:
      double real,imag;
      Complex(double r=0.0,double m=0.0):real(r),imag(m){}
      Complex operator-(const Complex & c);
    };
Complex operator +(const Complex &a,const Complex &b)
{
  return Complex(a.real+b.real,a.imag+b.imag);//返回一个临时对象“类名（构造函数实参表）”
}
Complex Complex::operator - (const Complex &c)//将“-”重载为一个成员函数
{
  return Complex(real-c.real,imag-c.imag);//返回一个临时对象
}
int main()
{
  Complex a(4,4),b(1,1),c;
  c=a+b;
  cout<<c.real<<","<<c.imag<<endl;
  cout<<(a-b).real<<","<<(a-b).imag<<endl;
  return 0;
}
//运算符重载为全局函数时，参数的个数等于运算符的目数（即操作的个数）；
//运算符重载为成员函数时，参数的个数等于运算符的目数减一。
