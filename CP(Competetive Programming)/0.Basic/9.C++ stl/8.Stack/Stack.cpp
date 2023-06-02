#include<iostream>
#include<stdio.h>
#include<string>
#include<stack>

using namespace std;

int main()
{
    stack<string>s;
    s.push("Dipta");
    s.push("Nabil");
    s.push("Tayeb");

    while(!s.empty())
    {
        string x;
        x = s.top();
        cout<<x<<endl;
        s.pop();
    }
    return 0;
}
