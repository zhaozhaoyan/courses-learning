#include<iostream>
#include<iomanip>
using namespace std;
int tomorrow(int year,int month,int day)
{
  if(month==1||month==3||month==5||month==7||month==8||month==10)
  {
    if(day<31) day=day+1;
    else
    {
      month=month+1;
      day=1;//该月的最后一天，第二天变为一号，并且月份加1
    }
  }
  else if(month==4||month==6||month==9||month==11)
  {
      if(day<30) day=day+1;
      else
      {
        month=month+1;
        day=1;//该月的最后一天，第二天变为一号，并且月份加1
      }
  }
  else if(month==2)//判断闰年
  {
    if (((year%4==0)&&(year%100!=0))||((year%100==0)&&(year%400==0)))
    {
      if(day<29) day=day+1;
      else
      {
          month=month+1;
          day=1;
      }
    }
    else
    {
      if(day<28) day=day+1;
      else
      {
        month=month+1;
        day=1;
      }
    }
  }
  else
  {
    if(day<31) day=day+1;
    else
    {
      year=year+1;
      month=1;
      day=1;
    }
  }
  cout<<year<<"-";
  cout<<setfill('0')<<setw(2)<<month<<"-";
  cout<<setfill('0')<<setw(2)<<day<<endl;
  return 0;
}
int main()
{
  int y,m,d;
  char c;//中间的短杠是字符
  cin>>y>>c>>m>>c>>d;
  tomorrow(y,m,d);
  return 0;
}
