#include<iostream>
#include<cstring>
using namespace std;
//class CArray类
class CArray{
  int size;
  int *ptr;
public:
  CArray(int s=0);
  CArray(CArray & a);
  ~CArray();
  void push_back(int v);
  CArray & operator=(const CArray & a);
  int length(){return size;}
  int & operator[](int i)
  {
    return ptr[i];
  }
};
//构造函数
CArray::CArray(int s):size(s)
{
  if(s==0)
         ptr=NULL;
  else
         ptr=new int[s];
}
//复制构造函数
CArray::CArray(CArray & a){
  if(!a.ptr){
    ptr=NULL;
    size=0;
    return;
  }
  ptr=new int[a.size];
  memcpy(ptr,a.ptr,sizeof(int)*a.size);
  size=a.size;
}
//析构函数
CArray::~CArray()
{
  if(ptr)delete[]ptr;
}
//重载赋值运算符
CArray & CArray::operator=(const CArray & a)
{
  if(ptr==a.ptr)
    return *this;
  if(a.ptr==NULL){
    if(ptr) delete[]ptr;
    ptr=NULL;
    size=0;
    return *this;
  }
  if(size<a.size)
  {
    if(ptr)
       delete[]ptr;
       ptr=new int[a.size];
  }
  memcpy(ptr,a.ptr,sizeof(int)*a.size);
  size=a.size;
  return *this;
}
//在数组尾部新添一个元素
void CArray::push_back(int v)
{
  if(ptr){
    int * temPtr=new int[size+1];
    memcpy(temPtr,ptr,sizeof(int)*size);
    delete[]ptr;
    ptr=temPtr;
  }
  else
    ptr=new int[1];//直接分配一个元素的空间
  ptr[size++]=v;//加入新的数组元素
}
int main()//编写可变长整型数据类，使之能如下使用
{
  CArray a;//开始数组为空
  for(int i=0;i<5;++i)
     a.push_back(i);//要用动态分配的内存来存放数组元素，需要一个指针成员变量，析构函数释放内存最合适
  CArray a2,a3;
  a2=a;//a2空，赋值号需要重载
  for(int i=0;i<a.length();++i)
     cout<<a2[i]<<" ";//重载[]
  a2=a3;
  for(int i=0;i<a2.length();++i)
     cout<<a2[i]<<" ";//a2.length()返回0
  cout<<endl;
  a[3]=100;
  CArray a4(a);//复制构造函数初始化，写复制构造函数
  for(int i=0;i<a4.length();++i)
     cout<<a4[i]<<" ";
  cout<<endl;
  return 0;
}
