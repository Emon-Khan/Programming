#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* link;
};
struct Node* head;
void print(){
    //head->data;
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }
    //printf("%d ", t-)
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
int main(){
    head = NULL;
    insertAtEnd(1);
    insertAtEnd(4);
    insertAtEnd(5);
    print();
    return 0;
}
