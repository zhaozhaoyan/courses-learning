#include<iostream>
using namespace std;
class Base{
public:
  int n;
  Base(int i):n(i)
  {
    cout<<"Base "<<n<<" constructed"<<endl;//1
  }
  ~Base()
  {
    cout<<"Base "<<n<<" destructed"<<endl;//4
  }
};
class Derived:public Base{//派生类构造函数
public:
  Derived(int i):Base(i)//基类构造函数
  {
    cout<<"Derived constructed"<<endl;//2
  }
  ~Derived()//基类的析构函数
  {
    cout<<"Derived destructed"<<endl;//3
  }
};
int main()
{
  Derived Obj(3);
  return 0;
}
