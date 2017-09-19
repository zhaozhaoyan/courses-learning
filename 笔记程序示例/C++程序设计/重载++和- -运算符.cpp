#include<iostream>
using namespace std;
class CDemo{
  private:
    int n;
  public:
    CDemo(int i=0):n(i){}
    CDemo operator ++();//也可以将类型定义为 CDemo的引用 CDemo &,例如书上的例题
    CDemo operator ++(int);
    operator int (){return n;}
    friend CDemo operator--(CDemo &);
    friend CDemo operator--(CDemo &,int);
  };
  CDemo CDemo::operator++(){//前置++
    n++;
    return *this;
  }
  CDemo CDemo::operator++(int k){//后置++
    CDemo tmp(*this);
    n++;
    return tmp;
  }
  CDemo operator --(CDemo & d){//前置--
    d.n--;
    return d;
  }
  CDemo operator--(CDemo & d,int){//后置--
    CDemo tmp(d);
    d.n--;
    return tmp;
  }
  int main()
  {
    CDemo d(5);
    cout<<(d++)<<",";
    cout<<d<<",";
    cout<<(++d)<<",";
    cout<<d<<endl;
    cout<<(d--)<<",";
    cout<<d<<",";
    cout<<(--d)<<",";
    cout<<d<<endl;
    return 0;
  }
