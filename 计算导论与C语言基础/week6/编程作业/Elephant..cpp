#include<iostream>
#define PI 3.14159
using namespace std;
int main()
{
   int h,r,t;
   double a,v;
   cin>>h>>r;
   v=PI*r*r*h;
   a=20000/v;
   t=(int)(20000/v);
   if(a>t)
   {
       cout<<t+1<<endl;
   }
   else
   {
       cout<<t<<endl;
   }
   return 0;
}
