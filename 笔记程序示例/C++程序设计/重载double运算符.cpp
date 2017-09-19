#include<iostream>
using namespace std;
class Complex
{
  double real,imag;
public:
  Complex(double r=0,double i=0):real(r),imag(i){};
  operator double(){return real;}//重载强制类型转换符double
};
int main()
{
  Complex c(1.2,3.4);
  cout<<(double)c<<endl;
  double n=2+c;//等价于double n=2+c.operator double()
  cout<<n;
  cout<<endl;
}
