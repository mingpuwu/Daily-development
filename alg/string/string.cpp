#include<string>
#include<iostream>

using namespace std;

/*
字符串子序列(注意与子串的区别)
abc   有 abc ab ac bc a b c
详细见笔记本
*/

void subsequence(string word, int i, string res)
{
    if(i == word.length())
    {
        cout<<res<<endl;
        return;
    }

    string resNoclude(res);

    res.push_back(word[i]);

    subsequence(word, i+1, res);

    subsequence(word, i+1, resNoclude);
}


/*
字符串全排列
abc  有 abc acb bac bca cab cba
注意与子序列的区别
详细见笔记本
*/

void swap(string& word, int i, int j)
{
    char tmp = word[i];
    word[i] = word[j];
    word[j] = tmp;
}

//begin代表当前递归首字符的位置(子问题是begin--length-1)
void allpermutation(string word, int begin)
{
    if(begin == word.length())
    {
        cout<<word<<endl;
        return;
    }

    for(int j = begin; j < word.length(); j++)
    {
        swap(word,begin,j);//交换
        allpermutation(word, begin+1);
        swap(word,begin,j);
    }
}



int main()
{
    // string res;
    // subsequence("abc", 0 , res);

    string res1;
    string word("abb");
    allpermutation(word, 0);
}