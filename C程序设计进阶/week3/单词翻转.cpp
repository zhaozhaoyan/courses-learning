#include<iostream>
using namespace std;
int i=0;//单词翻转，根据视频里面的举例
char input[500];
int recur()
{
  char c=input[i];
  i++;
  if(c==' ')
  {
    return 1;
  }
  if(c!=' '&&c!='\0')
  {
     recur();
     cout<<c;
  }
  return 1;
}
int main()
{
    cin.getline(input,501);
    if(recur()==1)  cout<<" ";
    while(input[i]!='\0')
    {
      if(recur()==1) cout<<" ";
    }
    if(input[i]=='\0') cout<<endl;
    return 0;
}
