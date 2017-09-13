#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  cin.get();//此处需要加一句 来读取换行符  因为我们需要输入回车键，不然程序无法执行
  char a[256];
  char b[256];
  for(int i=0;i<n;i++)
  {
    cin.getline(a,256);
    for(int j=0;j<256;j++)
    {
      switch(a[j])
      {
        case 'A':b[j]='T';break;
        case 'T':b[j]='A';break;
        case 'G':b[j]='C';break;
        case 'C':b[j]='G';break;
        default :b[j]='\0';break;
      }
    }
    for(int i=0;i<256;i++)
    {
      if(b[i]!='\0')
      {
        cout<<b[i];
      }
      else
      {
        cout<<endl;
        break;
      }
    }
  }
  return 0;
}
