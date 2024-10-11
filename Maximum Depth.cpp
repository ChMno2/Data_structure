/*
題目
給定一個二元樹，請寫一個函數來計算該樹的最大深度（Maximum Depth）。

二元樹的最大深度是從根節點到最遠葉節點的最長路徑上的節點數量。
節點數為 n 的樹其深度為 0，而非空的樹，其深度至少為 1。
*/

#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x),left(NULL),right(NULL){}
};
int maxDepth(TreeNode * root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(maxDepth(root->left),maxDepth(root->right)) + 1;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    cout<<"Maximum depth of the binary tree is "<<maxDepth(root)<<endl;
}
