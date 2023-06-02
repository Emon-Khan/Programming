#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
	int data;
	struct node *next;
}node;
node* check_loop(node *head)
{
    node *p = head;
    node *q = head;
    while(p && q && q->next){
        p=p->next;
        q=q->next->next;
        if(p==q){
            return p;
        }
    }
    return NULL;
}
int main(){
    if(check_loop(1)){
        cout<<"There is a loop"<<endl;
    }else{
        cout<<"There is no loop"<<endl;
    }
    return 0;
}


