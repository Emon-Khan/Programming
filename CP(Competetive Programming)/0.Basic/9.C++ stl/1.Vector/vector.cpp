#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int myfunc(int a, int b){
    return a>b;
}
int main()
{
    string str="abcd";
    string str1="efgh";
    str = str+str1;
    return 0;
}
