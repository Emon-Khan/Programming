#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *right;
    struct node *left;
}*head = NULL, *leg = NULL;
//int counter = 0;
void insertAtEnd(int value)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp->data = value;
    temp->right = NULL;
    leg = temp;
    //counter++;
    /*if(counter == 3)
    {

    }*/
    if(head == NULL)
    {
        head = temp;
        temp->left = NULL;
    }
    else
    {
        struct node *tv = head;
        while(tv->right != NULL)
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
bool bo = 0;
void printReverse(struct node *ptr)
{
    cout<<ptr->data<<" ";
    if(ptr->left == NULL)
    {
        bo = 1;
        cout<<endl;
        return;
    }
    if(!bo)
    {
        printReverse(ptr->left);
    }
}
int main()
{
    int t, value;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>value;
        insertAtEnd(value);
    }
    print(head);
    printReverse(leg);
    return 0;
}
