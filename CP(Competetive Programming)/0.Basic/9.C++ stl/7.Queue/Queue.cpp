#include<iostream>
#include<stdio.h>
#include<string>
#include<queue>

using namespace std;

int main()
{
    queue<int>q;
    q.push(5);
    q.push(9);
    q.push(7);
    q.push(12);

    while(!q.empty())
    {
        int x;
        x = q.front();
        printf("%d ", x);
        q.pop();
    }
    return 0;
}
