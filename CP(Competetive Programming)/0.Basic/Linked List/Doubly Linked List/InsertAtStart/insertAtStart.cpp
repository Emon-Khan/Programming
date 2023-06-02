#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*head = NULL, *leg = NULL;
void insertAtStart(int value)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node)) ;
    temp->data = value;
    temp->left = NULL;
    if(head == NULL)
    {
        head = temp;
        temp->right = NULL;
        leg = temp;
    }
    else
    {
        struct node* tp = head;
        while(tp->left != NULL)
        {
            tp = tp->left;
        }
        tp->left = temp;
        temp->right = tp;
        head = temp;
    }
}
/*void print(struct node *ptr)
{
    //cout<<ptr->data<<" ";
    while(ptr->right != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->right;
    }
    cout<<ptr->data<<endl;
}*/
bool bb=0;
void print(struct node *ptr)
{
    cout<<ptr->data<<" ";
    //cout<<ptr->data<<" ";
    if(ptr->right == NULL)
    {
        bb=1;
        cout<<endl;
        return;
        //ptr = ptr->right;
    }
    if(!bb)
    {
        print(ptr->right);
    }
    //cout<<ptr->data<<endl;
}
/*void printReverse(struct node* ptr)
{
    //cout<<ptr->data<<" ";
    while(ptr->left != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->left;
    }
    cout<<ptr->data<<endl;
}*/
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
        insertAtStart(value);
    }
    print(head);
    printReverse(leg);
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;

struct node
{
    int n;
    struct node* right;
    struct node* left;
}*head = NULL, *leg = NULL;

void make(int arr[])
{
    struct node *temp = NULL;
    for(int i = 0; i < 3; ++i)
    {
        struct node *root = (struct node *) malloc(sizeof(struct node));
        root -> n = arr[i];
        root -> right = NULL;

        if(head == NULL)
        {
            head = root;
            root -> left = NULL;
        }
        else
        {
            struct node *tp = head;
            //tp = head;
            while(tp -> right != NULL)
            {
                //tp -> right -> left = tp;
                tp = tp -> right;
            }
            tp -> right = root;
            root -> left = tp;
            leg = root;

        }
//        cout << arr[i] << endl;
    }
}
bool bb;
void show(struct node *pt)
{
    cout << pt -> n << " ";
    if(pt -> right == NULL)
    {
        bb = 1;
        cout<<endl;
        return;
    }

    if(!bb)
        show(pt -> right);

}
int main()
{
    int arr[] = {1,2,3};
    //cout << "hello" << endl;
    make(arr);
    bb = 0;
    show(head);
    struct node *temp = head;
    cout << "head -- >> " << endl;
    cout << temp -> n << " ";
    while(temp -> right != NULL)
    {
        temp = temp -> right;
        cout << temp -> n << " ";
    }
    cout << endl;
    cout << "leg -- >> " << endl;
    temp = leg;
    cout << temp -> n << " ";
    while(temp -> left != NULL)
    {
        temp = temp -> left;
        cout << temp -> n << " ";
    }
    cout << endl;

    return 0;
}*/
