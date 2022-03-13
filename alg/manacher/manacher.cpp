#include<string>
#include<vector>
#include<iostream>
#include<limits.h>
#include<algorithm>

using namespace std;

//加入#字符
string ManacherString(string str)
{
    string newstr(str.length()*2+1,0);

    int index = 0;
    for (int i = 0; i < newstr.length(); i++)
    {
        newstr[i] = ((i&1) == 0) ? '#':str[index++];
    }

    return newstr;
}

int Manacher(string s)
{
    cout<<"strlength is :"<<s.length()<<endl;

    string newstr = ManacherString(s);
    cout<<"new string is :"<<newstr<<",length is :"<<newstr.length()<<endl;

    int paar[newstr.length()] = {0};  //回文半径数据
    int c = -1; //当前的中心位置
    int r = -1; //最右半径

    int maxValue = INT_MIN;

    for(int i = 0; i != newstr.length(); i++)
    {
        //parr[c*2-i]是i', r-i是到右回文的距离
        paar[i] = (r > i) ? min<int>(paar[c*2-i],r-i) : 1;

        while(i+paar[i] < newstr.length() and i - paar[i] > -1)
        {
            if(newstr[i+paar[i]] == newstr[i-paar[i]])
                paar[i]++;
            else
                break;
        }

        if((i+paar[i]) > r)
        {
            r = i + paar[i];
            c = i;
        }

        maxValue = max<int>(maxValue, paar[i]);

    }

    return maxValue - 1;
}

int main()
{
    cout<<Manacher("1aaa")<<endl;

}