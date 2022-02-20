#include<iostream>
#include<vector>
#include<map>
#include<set>



struct Node;

//线信息
//包括这个线的权重、以及所连接的点的
struct Edge
{
    int weight;
    Node* from;
    Node* to;

    Edge(int w, Node* from, Node* to)
    {
        Edge::weight = w;
        Edge::from = from;
        Edge::to = to;
    }
};


//每个点包含的信息：
//点的编号、进入点的线有几个、出去点的线有几个、以及它的可以走到的点、以及对应的线
struct Node
{
    int value;
    int in;
    int out;
    std::vector<Node*> nexts;
    std::vector<Edge*> edges;

    Node(int arg):value(arg)
    {
        Node::in = 0;
        Node:: out = 0;
    }
};


//图由点和线组成
struct Graph{
    std::map<int, Node*> nodes;
    std::set<Edge*> edges;
};

//由别的结构转换为自己熟悉的结构
Graph CreatGraph(int matrix[][3])
{
    Graph mygraph;
    int line = sizeof(matrix)/sizeof(matrix[0]);
    for(int i = 0; i < line; i++)
    {
        int from = matrix[i][0];
        int to = matrix[i][1];
        int weight = matrix[i][2];
        Node* fromnode = mygraph.nodes.find(from)->second;
        if(fromnode == nullptr)
        {
            std::pair<int,Node*> fromnodepair(from,new Node(from));
            mygraph.nodes.insert(fromnodepair);
        }

        Node* tonode = mygraph.nodes.find(to)->second;
        if(tonode == nullptr)
        {
            std::pair<int,Node*> tonodepair(to,new Node(to));
            mygraph.nodes.insert(tonodepair);
        }

        Edge* newedge = new Edge(weight,fromnode, tonode);
        fromnode->nexts.push_back(tonode);
        fromnode->out++;
        tonode->in++;
        fromnode->edges.push_back(newedge);
        tonode->edges.push_back(newedge); 
    }

    return mygraph;
}

void widthforeach(Node* node)
{
    if(node == nullptr)
        return;
    
    
}

int main()
{

}