#include<iostream>
using namespace std;
int main(){
  int x;
  char buf[100];
  cin>>x;
  //cin.get();
  cin.getline(buf,90);//注意cin.getline会读取多余的换行符,要在前面加cin.get()
  cout<<buf<<endl;//getline读到留在流中的'\n'就会返回
  return 0;
}
