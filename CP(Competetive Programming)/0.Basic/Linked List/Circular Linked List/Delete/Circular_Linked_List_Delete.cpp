#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void del( int position, int n)
{
    struct node *temp1, *temp2;
    temp1 = (struct node*) malloc(sizeof(temp1));
    temp1 = head;
    temp2 = (struct node*) malloc(sizeof(temp2));
    temp2 = head;
    if(position == 1)
    {
        for(int i = 0; i<position; i++)
        {
            temp1 = temp1->next;
            head = temp1;
        }
        for(int i = 0; i<n-position; i++)
        {
            temp2 = temp2->next;
        }
        temp2->next = head;
    }
    else if(position == n)
    {
        for(int i = 0; i<n-2; i++)
        {
            temp1 = temp1->next;
        }
        temp1->next = head;
    }
    else
    {
        for(int i = 0; i<position; i++)
        {
            temp1 = temp1->next;
        }
        for(int i = 0; i<position-2; i++)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp1;
    }

}
void print()
{
    struct node *ptr = head;
    while(ptr->next != head)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<ptr->data<<endl;
}
int main()
{
    int i, n, item, position;
    struct node *newnode, *p;
    printf("No of nodes ");
    scanf("%d", &n);
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
    printf("Enter which index no element you want to remove ");
    scanf("%d", &position);
    printf("Before Deletion Operation \n");
    print();
    del(position, n);
    printf("After Deletion Operation \n");
    print();
    return 0;
}

