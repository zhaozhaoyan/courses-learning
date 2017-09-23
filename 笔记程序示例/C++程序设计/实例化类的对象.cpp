#include<iostream>
#include<stdlib.h>
using namespace std;
//定义一个坐标类
class Coordinate
{
public:
    int x;
    int y;
    void printX()
    {
      cout<<x<<endl;
    }
    void printY()
    {
      cout<<y<<endl;
    }
};
int main()
{
  Coordinate coor;
  coor.x=10;
  coor.y=20;
  coor.printX();
  coor.printY();//栈的方式
  Coordinate *p=new Coordinate();
  if(NULL==p)
  {
    //failed;//解决内存new失败
    return 0;
  }
  p->x=100;
  p->y=200;
  p->printX();
  p->printY();//堆的方式
  delete p;
  p=NULL;
  return 0;
}
