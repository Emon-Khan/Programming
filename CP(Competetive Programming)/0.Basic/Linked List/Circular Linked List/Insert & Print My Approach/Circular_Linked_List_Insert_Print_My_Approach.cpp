#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void print()
{
    struct node *ptr = head;
    while(ptr->next != head)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<ptr->data<<" ";
}
/*void circular(int value)
{
    struct node *newnode, *t = (struct node*) malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if(head==NULL)
    {
        head = t = newnode;
    }
    else
    {
        t->next = newnode;
        t = newnode;
    }
    newnode->next=head;
    print();
}*/
int main()
{
    int i, n, item;
    struct node *newnode, *p;
    printf("No of nodes ");
    scanf("%d", &n);
    /*printf("Enter 0th node ");
    scanf("%d", &item);
    newnode = (struct node*) malloc(sizeof(newnode));
    newnode->data = item;
    newnode->next = NULL;
    head = newnode;
    p = newnode;*/
    for(i=0; i<n; i++)
    {
        printf("Enter element on node ");
        scanf("%d", &item);
        newnode = (struct node*) malloc(sizeof(newnode));
        newnode->data = item;
        newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
            p = newnode;
        }
        else
        {
            p->next = newnode;
            p = p->next;
        }
    }
    p->next = head;
    print();
    return 0;
}

