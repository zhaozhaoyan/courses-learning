#include<iostream>
using namespace std;
int q(int n){
  if(n==0)
  return 1;
  else
  return(n+q(n-1));
}
int main()
{
  cout<<q(4)<<endl;
  return 0;
}                                                                                                                                                       
