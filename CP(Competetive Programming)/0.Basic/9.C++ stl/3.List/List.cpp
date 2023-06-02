#include<iostream>
#include<stdio.h>
#include<list>
#include<iterator>
#include<string>
#include<queue>

using namespace std;

int main(){
    list<float>mylist(4, .5);
    list<float>:: iterator it;

    /*mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(20);
    mylist.push_front(25);
    mylist.push_back(13);
    mylist.reverse();
    mylist.clear();

    cout<<mylist.size()<<endl;*/

    for(it = mylist.begin(); it != mylist.end(); it++){
        cout<<*it<<'\t';
    }
    return 0;
}
