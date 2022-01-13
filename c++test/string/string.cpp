#include<iostream>
#include<string>
#include<iterator>
#include <algorithm>

using std::string;
using std::cout;
using std::endl;
using std::iterator;

int main()
{
    string data{"http12345"};
    string data2{"6789"};

    if(data.find_first_of("0") == std::string::npos)
    {
        cout<<"not find"<<endl;
    }

    data.assign(data2, 1, string::npos);

    char cstr[] = "12345";
    data.assign(&cstr[3]);

    data.assign({'1','1','3'});

    string::iterator iter;

    for(iter = data.begin(); iter != data.end(); iter++)
    {
        cout<<*iter<<endl;
    }

    cout<<data.capacity()<<endl;
    data.clear();
    
    cout<<data.capacity()<<endl;
    cout<<data<<endl;

    char cdata[10] = {};

    data = "123456789";

    data.copy(cdata,3,1);

    cout<<cdata<<endl;

    data.erase(std::find(data.begin(),data.end(),'4'));

    cout<<data<<endl;

}