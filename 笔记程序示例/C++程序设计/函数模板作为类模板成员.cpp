#include<iostream>
using namespace std;
template<class T>
class A{
public:
  template<class T2>//成员函数模板
  void Func(T2 t){
    cout<<t;
  }
};
int main()
{
  A<int>a;
  a.Func('K');
  a.Func("hello");//成员函数模板func被实例化
  cout<<endl;
  return 0;
}
