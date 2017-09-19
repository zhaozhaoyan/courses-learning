#include<iostream>
using namespace std;
class Complex{
    public:
      Complex(double r=0.0,double i=0.0){//构造函数
        real=r;
        imag=i;
      }
      double real;//成员变量实部
      double imag;//虚部
    };
Complex operator +(const Complex &a,const Complex &b)//重载为普通函数
{
  return Complex(a.real+b.real,a.imag+b.imag);//返回一个临时对象“类名（构造函数实参表）”
}
int main()
{
  Complex a(1,2),b(2,3),c;
  c=a+b;//相当于operator+(a,b)
  cout<<c.real<<","<<c.imag<<endl;
  return 0;
}
//运算符重载为全局函数时，参数的个数等于运算符的目数（即操作的个数）；
//运算符重载为成员函数时，参数的个数等于运算符的目数减一。
