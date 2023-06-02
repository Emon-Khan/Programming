#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*head = NULL, *leg = NULL;
void insert(int value)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp->data = value;
    temp->right = NULL;
    leg = temp;
    if(head == NULL)
    {
        head = temp;
        temp->left = NULL;
    }
    else
    {
        struct node *tv = head;
        while(tv->right !=NULL)
        {
            tv = tv->right;
        }
        tv->right = temp;
        temp->left = tv;
    }
}
bool bb = 0;
void print(struct node *ptr)
{
    cout<<ptr->data<<" ";
    if(ptr->right == NULL)
    {
        bb = 1;
        cout<<endl;
        return;
    }
    if(!bb)
    {
        print(ptr->right);
    }
}
void deleteNode(int t, int position)
{
    struct node *temp2 = head;
    if(t!=position)
    {
        for(int i=0; i<position; i++)
        {
            temp2 = temp2->right;
            /*cout<<i<<endl;
            cout<<temp2<<endl;*/
        }
        temp2->left = temp2->left->left;
        if(temp2->left == NULL)
        {
            head = temp2;
        }
        else
        {
            struct node *temp3 = temp2->left;
            temp3->right = temp2;
        }
    }
    else
    {
        for(int i=0; i<position-2; i++)
        {
            temp2 = temp2->right;
            /*cout<<i<<endl;
            cout<<temp2<<endl;*/
        }
        temp2->right = NULL;
    }
    bb = 0;
    print(head);
}
int main()
{
    int t, value;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>value;
        insert(value);
    }
    print(head);
    int position;
    cin>>position;
    deleteNode(t, position);
    return 0;
}
