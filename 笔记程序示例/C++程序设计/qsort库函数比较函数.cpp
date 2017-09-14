#include<stdio.h>
#include<stdlib.h>
int MyCompare(const void * elem1,const void * elem2)
{
  unsigned int * p1,* p2;
  p1=(unsigned int *)elem1;//*elem1非法，因为elem1是 void * 类型的
  p2=(unsigned int *)elem2;//*elem2非法，因为elem2是 void * 类型的
  return (*p1%10)-(*p2%10);//按个位数从小到大排序
}
#define NUM 5
int main()
{
  unsigned int an[NUM]={8,123,11,10,4};
  qsort(an,NUM,sizeof(unsigned int),MyCompare);//qsort库函数
  for(int i=0;i<NUM;i++)
    printf("%d ",an[i]);//注意加空格
    printf("\n");//注意加换行
  return 0;
}
