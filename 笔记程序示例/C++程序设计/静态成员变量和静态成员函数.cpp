#include<iostream>
using namespace std;
class CRectangle
{
   private:
      int w,h;
      static int nTotalArea;
      static int nTotalNumber;  //静态成员变量
   public:
           CRectangle(int w_,int h_);
           ~CRectangle();
            static void PrintTotal();  //静态成员函数
     };

    CRectangle::CRectangle(int w_,int h_)
    {
        w=w_;
        h=h_;
        nTotalNumber++;
        nTotalArea+=w*h;
    }
     CRectangle::~CRectangle()
    {
         nTotalNumber--;
         nTotalArea-=w*h;
    }
     void CRectangle::PrintTotal()
     {
          cout<<nTotalNumber<<","<<nTotalArea<<endl;
     }

     int CRectangle::nTotalNumber=0;
    int CRectangle::nTotalArea=0;
     //必须在定义类的文件中对静态成员变量单独进行一次说明或初始化
     //否则编译能通过，链接不能通过。
     int main()
     {
         CRectangle r1(3,3),r2(2,2);
         //cout<<CRectangle::nTotalNumber;//错误，私有的
        CRectangle::PrintTotal();
        r1.PrintTotal();
         return 0;
    }
