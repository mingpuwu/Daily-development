#include<stack>
#include<queue>
#include<iostream>
#include<map>

/*计算宽度：思路，根据广度优先遍历，需要使用map记录节点在第几层
统计每层的数量
总结：需要两个三个变量记录当前层，当前层已经统计了几个节点，MAX值
思路点：左右节点一定在当前层的下一层
*/

typedef struct BiNode{
    int data;
    struct BiNode *left;
    struct BiNode *right;
}BiNode,*BiTree;

BiNode* CreadTreeNode(int data)
{
    BiNode *node = (BiNode*)malloc(sizeof(BiNode));
    if(node == nullptr)
    {
        printf("malloc node is error\n");
        return nullptr;
    }

    node->data = data;
    node->left = nullptr;
    node->right = nullptr;

    return node;
}

void calculatebreadth(BiTree tree)
{
    if(tree == nullptr)
    {
        return;
    }

    std::queue<BiNode*> s;
    std::map<BiNode*,int> nodeLevelmap;
    int currentLevel = 1;
    int LevelMaxcount = 0;
    int Max = 0;
    s.push(tree);
    nodeLevelmap.insert(std::pair<BiNode*,int>(tree,currentLevel));

    while (!s.empty())
    {
        BiNode* node = s.front();

        int nodeLevel = nodeLevelmap.find(node)->second;
        if(currentLevel == nodeLevel)
        {
            LevelMaxcount++;
            LevelMaxcount > Max?Max = LevelMaxcount:Max;
        }
        else
        {
            currentLevel = nodeLevel;
            LevelMaxcount = 1;
        }
        printf("node data is %d, level is %d, level max %d\n",node->data,currentLevel,LevelMaxcount);

        s.pop();

        if(node->left)
        {
            s.push(node->left);
            nodeLevelmap.insert(std::pair<BiNode*,int>(node->left,currentLevel+1));
        }

        if(node->right)
        {
            s.push(node->right);
            nodeLevelmap.insert(std::pair<BiNode*,int>(node->right,currentLevel+1));
        }
    }

    printf("max is %d\n",Max);
}

int main()
{
    BiTree tree = CreadTreeNode(1);
    tree->left = CreadTreeNode(2);
    tree->right = CreadTreeNode(3);
    tree->left->left = CreadTreeNode(4);
    tree->left->right = CreadTreeNode(5);
    tree->right->left = CreadTreeNode(6);
    tree->right->right = CreadTreeNode(7);

    calculatebreadth(tree);
}