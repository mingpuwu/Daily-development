#include<iostream>
#include<string>
#include<list>
#include<map>
#include<stack>

using namespace std;

class Element
{
public:
    int value;

    Element(int v)
    {
        this->value = v;
    }
};

map<int, Element*> elementMap;
map<Element*, Element*> fatherMap;
map<Element*, int> sizeMap; //只保留头部节点的size

int Createunionset(list<int> lists)
{
    for(auto i: lists)
    {
        Element* e = new Element(i);
        pair<int,Element*> enode(i,e);
        elementMap.insert(enode);

        pair<Element*,Element*> fnode(e,e);
        fatherMap.insert(fnode);

        pair<Element*,int> snode(e,1);
        sizeMap.insert(snode);
    }
}

Element* FindHead(int v)
{
    stack<Element*> pathstack;
    auto pairnode = elementMap.find(v);
    if(pairnode == elementMap.end())
        return nullptr;

    Element* enode = pairnode->second;

    while(enode != fatherMap.find(enode)->second) //当父节点是自己的时候说明到头了
    {
        pathstack.push(enode);
        enode = fatherMap.find(enode)->second;
    }

    while(!pathstack.empty())
    {
        Element* pathnode = pathstack.top();

        fatherMap.insert(pair<Element*, Element*>(pathnode,enode));

        pathstack.pop();
    }

    return enode;
}

bool IsSameSet(int a, int b)
{
    return FindHead(a) == FindHead(b);
}

void Union(int a, int b)
{
    if(elementMap.find(a) != elementMap.end() and elementMap.find(b) != elementMap.end())
    {
        Element* aE = FindHead(a);
        Element* bE = FindHead(b);
        if(aE != bE)
        {
            Element* big = sizeMap.find(aE)->second >= sizeMap.find(bE)->second? aE:bE;
            Element* small = big == aE? bE:aE;
            fatherMap[small] = big;//小的节点挂在多的节点下面
            sizeMap[big] = sizeMap.find(big)->second+sizeMap.find(small)->second;
            sizeMap.erase(small);
        }
    }

    sizeMap.find(FindHead(a))->second;
}

int main()
{

    list<int> data = {1,2,3,4,5,6,7,8};
    Createunionset(data);

    Union(1,3);

    bool is = IsSameSet(1,3);
    cout<<is<<endl;
}