//定义一个函数
student *create()
{
  student *head,*temp;
  int num,n=0;
  head=new student;
  temp=head;
  cin>>num;
  while(num!=-1)
  {
    n++;
    temp->id=num;
    temp->next=new student;
    temp=temp->next;
    cin>>num;
  }
  if(n==0)head=NULL；
  else temp->next=NULL;
  return head;
}
