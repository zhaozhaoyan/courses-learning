#include<iostream>
using namespace std;
struct Node
{
  int num;
  Node *ahead;
  Node *next;
}
Node *Create(int N)；
Node *Search(Node *ahead，int P)；
Node *Release(Node *ahead，int M)；
int main()
{
  int N,P,M=0;//N-起始节点数，P-开始结点
  cin>>N>>P>>M;//每次释放第m个结点
  Node *ahead=Create(N);//创建n个节点的环
  head=Search(head，P);//找到第p个节点
  while(head->next!=head)//不断释放第m个节点
  {                        //直到只剩一个元素
    head=Release(head，M)//释放第m个节点
  }
  cout<<head->num;
  return 0;
}
Node *Create(int N)；//创建包含n个结点的双向循环列表
{
  int n=1;
  Node *node=new Node;
  node->num=n;
  Node *head=node;//指向第一个节点
  Node *tail=head;//指向最后一个节点
  while(n++<N)
  {
    node=new Node;//建新结点
    node->num=n;//赋值
    tail->next=node;//接入新节点
    node->ahead=tail;
    tail=tail->next;//尾巴后移
  }
  tail->next=head;//尾巴处理
  head->ahead=tail;
  return head;
}

Node *Search(Node *ahead，int P)；//从head开始寻找第p个节点
{
  while(head->num!=P)
  {
    head=head->next;
  }
  return head;
}

Node *Release(Node *ahead，int M)；//释放head开始的第m个节点
{
  int count=1;
  Node *temp=head;//指向最后一个节点
  while(count<M)//寻找第m个结点
  {
    temp=temp->next;
    count++;
  }
  temp->ahead->next=temp->next;//移除第m个结点
  temp->next->ahead=temp->ahead;//移除第m个节点
  cout<<temp->num<<",";
  head=ahead->tail;//释放第m个结点所占的空间
  delete temp;
  return head;
}
