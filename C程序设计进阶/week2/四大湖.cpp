#include<iostream>
using namespace std;
int Lake(int lakes[])
{
    int a=0,b=0,c=0,d=0;
    //����lakes[0]��ͥ��[1]�����[2]۶����[3]̫��
    //��С˳��Ӵ�С����4��3��2��1
    a=(lakes[0]==1)+(lakes[1]==4)+(lakes[2]==3);
    b=(lakes[1]==4)+(lakes[0]==1)+(lakes[2]==2)+(lakes[3]==3);
    c=(lakes[1]==1)+(lakes[0]==3);
    d=(lakes[2]==4)+(lakes[3]==1)+(lakes[1]==2)+(lakes[0]==3);
    if(a==1&&b==1&&c==1&&d==1) return 1;
    else return 0;
}
int main()
{
    int lakes[4],answer=0;
    for(int i=1;i<=4;i++)//��ͥ���п��ܵ�����
    {
        for(int j=1;j<=4;j++)//������п��ܵ�����
        {
            for(int k=1;k<=4;k++)//۶�����п��ܵ�����
            {
                for(int l=1;l<=4;l++)//̫���п��ܵ�����
                {
                    if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&k!=l)
                    {
                        lakes[0]=i;
                        lakes[1]=j;
                        lakes[2]=k;
                        lakes[3]=l;
                        answer=Lake(lakes);
                        if(answer==1)
                        {
                            for(int i=0;i<4;i++)
                            {
                                cout<<lakes[i]<<endl;
                            }
                        }
                        else continue;
                    }
                }
            }
        }
    }
    return 0;
}
