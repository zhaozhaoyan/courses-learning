#include<iostream>
using namespace std;
template<class T>
T Max(T a,T b){
  cout<<"Template Max 1"<<endl;
  return 0;
}
template<class T,class T2>
T Max(T a,T2 b){
  cout<<"Template Max 2"<<endl;
  return 0;
}
double Max(double a,double b){
  cout<<"Function Max"<<endl;
  return 0;
}
int main()
{
  int i=4,j=5;
  Max(1.2,3.4);//先调用max函数
  Max(i,j);//调用第一个模板函数
  Max(1.2,3);//调用第二个模板函数
  return 0;
}
