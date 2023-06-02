#include<iostream>
#include<stdio.h>
#include<string>
#include<queue>
using namespace std;
int main(){
    priority_queue<string>q;
    q.push("dipto");
    q.push("kesric");
    q.push("liza");
    q.push("israt");

    while(!q.empty()){
        string x;
        x = q.top();
        cout<<x<<endl;
        q.pop();
    }

    return 0;
}
