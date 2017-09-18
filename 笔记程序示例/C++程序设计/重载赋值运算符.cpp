//编写一个长度可变的字符串类string，该类有一个char*类型的成员变量
//用以指向动态分配的存储空间，该存储空间用来存放以‘\0’结尾的字符串
#include<iostream>
#include<cstring>
using namespace std;
class String{
   private:
     char* str;
   public:
     String():str(NULL){}
     const char*c_str()const{return str;};
     String & operator=(const char*s);
     ~String();
   };
String & String::operator=(const char*s)//重载”=“，是的obj=“hello”能够成立
{
  if(str)
    delete[]str;
  if(s){
    str=new char[strlen(s)+1];//当s不为空才会执行复制工作
    strcpy(str,s);
  }
  else
    str=NULL;
    return* this;
}
String::~String()
{
  if(str)
  delete[]str;
};
int main()
{
  String s;
  s="Good Luck,";
  cout<<s.c_str()<<endl;
  //String s2="hello!";//如果不注释掉会出错
  s="Shenzhou 8!";
  cout<<s.c_str()<<endl;
  return 0;
}
