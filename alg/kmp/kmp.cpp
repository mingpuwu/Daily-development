#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> GetNextArray(string str)
{
    if(str.length() == 1)
    {
        vector<int> next = {-1};
        return next;
    }

    vector<int> next(str.length(),0);
    next[0] = -1;
    next[1] = 0;
    int i = 2;
    int cn = 0;
    while(i < str.length())
    {
        if(str[i] == str[cn])
        {
            next[i++] = ++cn;
        }
        else if(cn > 0)
        {
            cn = next[cn];
        }
        else
        {
            next[i++] = 0;
        }
    }

    return next;
}

int Kmp(string str1, string str2)
{
    int i1 = 0;
    int i2 = 0;

    vector<int> next = GetNextArray(str2);

    while(i1 < str1.length() and i2 < str2.length())
    {
        if(str1[i1] == str2[i2]) //相等向后移动
        {
            i1++;
            i2++;
        }
        else if(next[i2] == -1) //str2已经没有办法再向前跳了，需要str1向后跳一个
        {
            i1++;
        }
        else
        {
            i2 = next[i2];//i2跳到前缀的末尾处，继续找
        }
    }

    return i2 == str2.length()?i1-i2:-1; //找到返回str1中当前的开头位置，找不到返回-1
}

int main()
{
    string a = "wumingpu";
    string b = "ing";
    cout<<Kmp(a,b)<<endl;
}