#include<iostream>
#include<string>
using namespace std;
//类模板，定义类模板MyArray,成员函数：构造函数，析构函数，display函数
                      //数据成员：m_pArr
template<typename T,int KSize,int KVal>
class MyArray
{
public:
  MyArray();
  ~MyArray()
  {
    delete[]m_pArr;
    m_pArr=NULL;
  }
  void display();
private:
  T *m_pArr;//模板参数T
};
template<typename T,int KSize,int KVal>
MyArray<T,KSize,KVal>::MyArray()
{
  m_pArr=new T[KSize];
  for(int i=0;i<KSize;i++)
  {
    m_pArr[i]=KVal;
  }
}
template<typename T,int KSize,int KVal>
void MyArray<T,KSize,KVal>::display()
{
  for(int i=0;i<KSize;i++)
  {
    cout<<m_pArr[i]<<endl;
  }
}
int main()
{
  MyArray<int,5,6>arr;//一个int型数组，数组长度为5，数组元素都是6，有5个6的数组
  arr.display();
  return 0;
}
