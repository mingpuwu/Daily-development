#include<stack>
#include<queue>
#include<iostream>
#include<map>

/*
判断是否为完全二叉树
判断是否为满二叉树
判断是否为搜索二叉树
判断是否为平衡二叉树(高度差最大为1)
*/

typedef struct BiNode{
    int data;
    struct BiNode *left;
    struct BiNode *right;
}BiNode,*BiTree;

BiNode* CreadTreeNode(int data)
{
    BiNode *node = (BiNode*)malloc(sizeof(BiNode));
    if(!node)
    {
        printf("malloc node is error\n");
        return nullptr;
    }

    node->data = data;
    node->left = nullptr;
    node->right = nullptr;

    return node;
}

/*判断是否是搜索二叉树
按照中序遍历，并且必须为增序
有一个静态变量去存储当前的值
*/

bool isBinarySort(BiTree tree)
{
    static int currentdata = 0;
    if(tree == nullptr)
        return true;

    if(!isBinarySort(tree->left))
        return false;

    if(currentdata > tree->data)
        return false;
    else
        currentdata = tree->data;

    if(!isBinarySort(tree->right))
        return false;

    return true;
}

/*
判断是否是完全二叉树
使用广度优先遍历
分情况讨论
：
1.任何一个节点只有右孩子没有左孩子，返回false
2.在1成立基础上，当出现第一个只有左孩子的节点后，后面的节点(根据广度优先遍历)都是叶
总结：需要右一个flag辅助标记是否出现了第二种情况
*/
bool isCompleteBiT(BiTree tree)
{
    if(tree == nullptr)
        return true;

    std::queue<BiNode*> q;
    bool leaf = false;
    q.push(tree);
    while (!q.empty())
    {
        BiNode* node = q.front();
        //printf("data node %d\n",node->data);

        q.pop();

        if(node->left == nullptr and node->right)
            return false;

        if(leaf and (node->left or node->right))
            return false;

        if(node->left and node->right == nullptr and leaf == false)
            leaf = true;

        if(node->left)
            q.push(node->left);

        if(node->right)
            q.push(node->right);
    }

    return true;
}


/*
树型DP思想判断是否为平衡二叉树
左子树是、右子树是、左高度与右高度的差小于等于1
*/

struct ReturnType
{
public:
    ReturnType(int isb, int h):isBalance(isb),height(h){}
public:
    bool isBalance;
    int height;
};

ReturnType process(BiNode* node)
{
    if(node == nullptr)
        return ReturnType(true,0);

    ReturnType left = process(node->left);
    ReturnType right = process(node->right);

    if(left.isBalance and right.isBalance and std::abs(left.height-right.height)<=1)
    {
        int h = std::max(left.height,right.height)+1;
        return ReturnType(true,h);
    }
    else
        return ReturnType(false,0);
}

bool isBalanceTree(BiTree tree)
{
    return process(tree).isBalance;
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

    if(isBinarySort(tree) == true)
        printf("binary is sort true\n");
    else
        printf("binary is sort false\n");

    if(isCompleteBiT(tree) == true)
        printf("binary is complete true\n");
    else
        printf("binary is complete false\n");

    if(isBalanceTree(tree) == true)
        printf("binary is balance true\n");
    else
        printf("binary is balance false\n");
}