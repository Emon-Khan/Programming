/*Source - https://www.youtube.com/watch?v=6vt3PFRC11E&list=PLdo5W4Nhv31bbKJzrsKfMpo_grxuLl8LU&index=51*/
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
    struct node *create();
};
struct node *create()
{
    int x;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter Data: ";
    cin >> x;
    if (x == -1)
    {
        return 0;
    }
    newnode->data = x;
    cout << "Enter left child of " << x << " ";
    newnode->left = create();
    cout << "Enter right child of " << x << " ";
    newnode->right = create();
    return newnode;
}
void preorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}
void postorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data<<" ";
}
int main()
{
    struct node *root;
    root = 0;
    root = create();
    cout << "Pre order is: ";
    preorder(root);
    cout << "\nIn order is: ";
    inorder(root);
    cout << "\nPost order is: ";
    postorder(root);
    return 0;
}
