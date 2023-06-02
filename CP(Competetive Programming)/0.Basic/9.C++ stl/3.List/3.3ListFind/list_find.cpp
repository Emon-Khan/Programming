#include<iostream>
#include<stdio.h>
#include<string>
#include<queue>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    int ar[5] = {3, 2, 7, 5, 4};
    list<int>mylist(ar, ar+5);
    list<int>:: iterator it;
    mylist.pop_front();
    mylist.pop_back();
    mylist.pop_back();
    mylist.pop_front();

    for(it = mylist.begin(); it != mylist.end(); it++)
    {
        cout<<*it<<"\t";
    }

    return 0;
}
