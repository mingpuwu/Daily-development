#include<iostream>
#include<string>
#include<map>
#include<functional>

using namespace std;

int main()
{
    map<string,string> mapdata;
    mapdata["aa"] = "data";

    map<string, string>::iterator iter;
    iter =  mapdata.find("aa");
    cout<<iter->second<<endl;

    std::hash<string> hash_int;
    size_t hashnum = hash_int("1234");
    cout<<hashnum<<endl;
    cout<<sizeof(size_t)<<endl;

}