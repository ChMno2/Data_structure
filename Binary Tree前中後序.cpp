//3. Binary Tree概念,找出子節點沒有比root大的個數
#include<bits/stdc++.h>
using namespace std;

vector<int> binary_tree;
void preorder(int node,int Node_num){
    if(node<=Node_num&&binary_tree[node]!=0)
    {
        cout<<binary_tree[node]<<" ";
        preorder(2*node,Node_num);
        preorder(2*node+1,Node_num);
    }
}
void inorder(int node,int Node_num){

    if(node<=Node_num&&binary_tree[node]!=0)
    {
        inorder(2*node,Node_num);
        cout<<binary_tree[node]<<" ";
        inorder(2*node+1,Node_num);
    }
}
void postorder(int node,int Node_num)
{
    if(node<=Node_num&&binary_tree[node]!=0)
    {
        postorder(2*node,Node_num);
        postorder(2*node+1,Node_num);
        cout<<binary_tree[node]<<" ";

    }
}
int main(){

    int Node_num;
    cout<<"請輸入tree的大小：";
    cin>>Node_num;
    binary_tree.resize(Node_num+1);
    cout<<"請輸入tree的數值：";
    for(int i=1;i<=Node_num;i++)
    {
        cin>>binary_tree[i];
    }

    cout<<"前序的結果:";
    preorder(1,Node_num);

    cout<<"中序的結果:";
    inorder(1,Node_num);

    cout<<"後序的結果:";
    postorder(1,Node_num);

}
