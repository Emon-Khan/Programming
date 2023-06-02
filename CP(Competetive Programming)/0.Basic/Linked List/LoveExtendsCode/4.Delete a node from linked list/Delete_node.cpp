#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* link;
};
struct Node* head;
void print()
{
    //head->data;
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    //printf("%d ", t-)
}
void insert(int value)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> data = value;
    temp -> link = NULL;
    if(head==NULL)
    {
        head = temp;
    }
    else
    {
        struct Node* t;
        t=head;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link = temp;
    }
}
void deleteNode(int position)
{
    if(position==1)
    {
        struct Node* temp3;
        temp3 = head;
        head = temp3->link;
        //head = head->link;
        free(temp3);
    }
    else
    {
        struct Node* temp1;
        temp1 = head;
        for(int i=1; i<=position-2; i++)
        {
            temp1 = temp1->link;
        }
        struct Node* temp2 = temp1->link;
        temp1->link = temp2->link;
        free(temp2);

    }
}
int main()
{
    head = NULL;
    insert(1);
    insert(4);
    insert(5);
    insert(6);
    print();
    printf("\n");
    deleteNode(1);
    print();
    return 0;
}
