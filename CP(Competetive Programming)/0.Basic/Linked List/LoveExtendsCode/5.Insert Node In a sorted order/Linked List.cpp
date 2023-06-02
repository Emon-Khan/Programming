#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *link;
};
struct Node *head;
void print(){
    //head->data;
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}
void insertAtEnd(int value){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> data = value;
    temp -> link = NULL;
    if(head==NULL){
        head = temp;
    }else{
        struct Node* t;
        t=head;
        while(t->link!=NULL){
            t=t->link;
        }
        t->link = temp;
    }

}
void insert(int value){
    struct Node* temp1 = (struct Node*) malloc(sizeof(struct Node));
    temp1 -> data = value;
    if(head == NULL || temp1 -> data < head->data){
        temp1->link = head;
        head = temp1;
    }
    else{
        struct Node *pred = head;
        struct Node *p = pred->link;
        while(p!=NULL && p->data < temp1->data){
           pred = p;
           p = p->link;
        }
        pred->link = temp1;
        temp1->link = p;
    }
}
int main(){
    head = NULL;
    insertAtEnd(4);
    insertAtEnd(10);
    insertAtEnd(13);
    print();
    insert(12);
    print();
    return 0;
}
