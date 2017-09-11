#include<iostream>
using namespace std;
struct student
{
  int id_num;
  char name[10];
};
int main()
{
  student mike={123,{'m','i','k','e','\0'}};
  student *one=&mike;
  cout<<(*one).id_num<<" "<<(*one).name<<endl;//one->id_num这种指向运算符更加明了one->name
  return 0;
}
