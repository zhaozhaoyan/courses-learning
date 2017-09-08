#include<iostream>
using namespace std;
int Lake(int lakes[])
{
    int a=0,b=0,c=0,d=0;
    //数组lakes[0]洞庭湖[1]洪泽湖[2]鄱阳湖[3]太湖
    //大小顺序从大到小排序，4，3，2，1
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
    for(int i=1;i<=4;i++)//洞庭湖有可能的排名
    {
        for(int j=1;j<=4;j++)//洪泽湖有可能的排名
        {
            for(int k=1;k<=4;k++)//鄱阳湖有可能的排名
            {
                for(int l=1;l<=4;l++)//太湖有可能的排名
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
