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
    struct Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}
void insert(int value)
{
    //struct Node* t;
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> data = value;
    temp -> link = head;
    head = temp;
    /*if(head==NULL)
    {
        t = temp;
        temp -> link = NULL;
    }
    else
    {
        temp->link = t;
        t = temp;
    }*/

}
int main()
{
    head = NULL;
    insert(1);
    insert(4);
    insert(5);
    insert(6);
    print();
    return 0;
}
