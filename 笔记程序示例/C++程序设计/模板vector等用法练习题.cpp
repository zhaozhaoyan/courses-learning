#include <vector>
#include <map>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    // 使用vector存储数字：3、4、8、4
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(8);
    vec.push_back(4);
    //循环打印数字
    //vector<int>::iterator itor=vec.begin();
    for(vector<int>::iterator itor=vec.begin();itor!=vec.end();itor++)//初始条件就是 =vec.begin()//最后一个元素的下一个位置
    {
      cout<<*itor<<endl;
    }
    cout<<endl;
    // 使用map来存储字符串键值对
    map<string, string> m;
    pair<string,string>p1("S","Shanghai");
    pair<string,string>p2("B","Beijing");
    pair<string,string>p3("G","Guangzhou");
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    // 打印map中数据
    //map<string,string>::iterator itor=m.begin();
    for(map<string,string>::iterator itor=m.begin();itor!=m.end();itor++)
    {
        cout<<itor->first<<endl;
        cout<<itor->second<<endl;
        cout<<endl;
    }
    return 0;
}
