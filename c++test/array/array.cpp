#include<iostream>

using namespace std;

typedef struct Node{
    int p;
    int end;
}Node;

struct Nodeclass{
    int p;
    int end;

    Nodeclass()
    {
        p = 0;
        end = 0;
        Nodeclass *next = new Nodeclass[26]();
    }
}Nodeclass;

int main()
{
    int a[10] = {0};
    Node* node = new Node();
    cout<<node->end;

    Node* nodearray = new Node[30];
    for(int i=0 ; i<30; i++)
    {
        cout<<nodearray->end<<endl;
        nodearray++;
    }
}