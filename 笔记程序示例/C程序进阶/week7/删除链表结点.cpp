linker *dele(student *head;int n)
{
  student *temp;
  temp=head;
  if(head==NULL)//head 为空，空表的情况
  {
    return(head);
  }
  if(head->num==n)//第一个节点是要删除的目标
  {
    head=head->next;
    delete temp;
    return(head);
  }
  while(temp!=NULL&&temp->num!=n)//寻找要删除的目标
  {
    follow=temp;
    temp=temp->next;
  }
  if(temp==NULL)//没有寻到要删除的目标
  cout<<"not found";
  else{
    follow->next=temp->next;//删除目标结点
    delete temp;
  }
  return(head);
}
