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

    it = find(mylist.begin(), mylist.end(), 5);
    cout<<*it<<endl;
    mylist.insert(it, 6);

    for(it = mylist.begin(); it != mylist.end(); it++)
    {
        cout<<*it<<'\t';
    }
    cout<<'\n';
    return 0;
}
