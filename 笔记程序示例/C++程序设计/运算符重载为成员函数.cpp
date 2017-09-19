#include<iostream>
using namespace std;
class Complex{
    public:
      Complex(double r=0.0,double i=0.0)：real(r),imag(i){}
      Complex operator +(const Complex &);
      Complex operator -(const Complex &);
    private:
      double real;
      double imag;
};
Complex Complex::operator + (const Complex &c)//将“+”重载为一个成员函数,c为传入的参数
{
  return Complex(real+c.real,imag+c.imag);//返回一个临时对象,
}
Complex Complex::operator - (const Complex &c)//将“+”重载为一个成员函数,c为传入的参数
{
  return Complex(real-c.real,imag-c.imag);//返回一个临时对象,
}
int main()
{
  Complex a,b(4.3,8.2),c(3.3,1.1);
  a=b+c;//x=y.operator+(z);
  a=b-c;//x=y.operator-(z);
  return 0;
}
//运算符重载为全局函数时，参数的个数等于运算符的目数（即操作的个数）；
//运算符重载为成员函数时，参数的个数等于运算符的目数减一。
