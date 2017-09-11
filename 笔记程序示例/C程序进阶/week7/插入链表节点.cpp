Student *insert(student *head;int n)
{
  student *temp,*unit,*follow;//插入节点值为n的结点
  temp=head;
  unit=new student;
  unit->num=n;
  unit->next=NULL;
  if(head==NULL)//如果链表为空，直接插入
  {
    head=unit;
    return(head);
  }//寻找第一个不小于n或结尾的结点temp
  while((temp->next!=NULL)&&(temp->num!=n)))//寻找要删除的目标
  {
    follow=temp;
    temp=temp->next;
  }
  if(temp==head)//如果temp为第一个结点
  {
    unit->next=head;
    head=unit;
  }
  else//如果temp为最后一个结点
  {
    if(temp->temp==NULL)
    temp->next=unit;
    else{//如果temp为一个中间结点
      follow->next=unit;
      unit->next=temp;
    }
  }
  return(head);
}
