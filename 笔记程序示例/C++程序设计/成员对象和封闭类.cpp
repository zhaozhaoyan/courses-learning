#include<iostream>
using namespace std;
     class CTyre{
        public:
           CTyre(){cout<<"CTyre contructor"<<endl;}
            ~CTyre(){cout<<"CTyre destructor"<<endl;}
     };
     class CEngine{
        public:
           CEngine(){cout<<"CEngine contructor"<<endl;}
           ~CEngine(){cout<<"CEngine destructor"<<endl;}
     };
     class CCar{
       private:
            CEngine engine;
            CTyre tyre;
        public:
            CCar(){cout<<"CCar contructor"<<endl;}
            ~CCar(){cout<<"CCar destructor"<<endl;}
     };

     int main(){
       CCar car;
       return 0;
     }
     //构造函数和析构函数的调用顺序是正好相反的
