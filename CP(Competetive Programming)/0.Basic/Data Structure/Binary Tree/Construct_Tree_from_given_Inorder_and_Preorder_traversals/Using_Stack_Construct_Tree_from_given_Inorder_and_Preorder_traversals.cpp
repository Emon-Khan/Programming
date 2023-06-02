/*
Source-https://www.youtube.com/watch?v=LVFYyw7rZb8
*/
#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    char val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};
TreeNode* construct_tree(vector<char>& inorder, vector<char>& preorder)
{
    int preIndex = 0, inIndex = 0, flag = 0;
    stack<TreeNode*> st;
    TreeNode* temp = new TreeNode(preorder[preIndex]);
    ++preIndex;
    st.push(temp);
    TreeNode *prev = temp;
    while(preIndex<preorder.size())
    {
        if(!st.empty() && inorder[inIndex]==st.top()->val)
        {
            prev = st.top();
            st.pop();
            ++inIndex;
            flag = 1;
        }
        else
        {
            TreeNode *node = new TreeNode(preorder[preIndex]);
            if(flag == 0)
            {
                prev->left = node;
                prev = prev->left;
            }
            else
            {
                prev->right = node;
                prev = prev->right;
                flag = 0;
            }
            st.push(node);
            ++preIndex;

        }
    }
    return temp;

}
void preorder_traversal(TreeNode *node){
    if(node == NULL){
        return;
    }
    cout<<node->val<<" ";
    preorder_traversal(node->left);
    preorder_traversal(node->right);
}
void inorder_traversal(TreeNode *node){
    if(node == NULL){
        return;
    }
    inorder_traversal(node->left);
    cout<<node->val<<" ";
    inorder_traversal(node->right);
}
int main()
{
    vector<char> inorder = {'H', 'D', 'P', 'L', 'A', 'Z', 'C', 'E'};
    vector<char> preorder = {'A', 'D', 'H', 'L', 'P', 'Z', 'C', 'E'};
    TreeNode* root = construct_tree(inorder, preorder);
    cout<< "Preorder Traversal: "<<endl;
    preorder_traversal(root);
    cout<<endl;
    cout<< "Inorder Traversal: "<<endl;
    inorder_traversal(root);
    return 0;

}