#include<iostream>
using namespace std;
struct student
{
  int id;
  student *next;
};
student *create();
int main()
{
  student *pointer=create();
  while(pointer->next!=NULL)
  {
    cout<<pointer->id<<endl;
    pointer=pointer->next;
  }
  return 0;
}
