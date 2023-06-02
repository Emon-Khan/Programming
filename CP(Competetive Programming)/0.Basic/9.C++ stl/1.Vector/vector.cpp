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
    vector<int>vec;
    vector<int>::iterator it;

    vec.push_back(10);
    vec.push_back(5);
    vec.push_back(15);
    vec.push_back(26);
    vec.push_back(12);
    //sort(vec.begin(), vec.end(), myfunc);
    sort(vec.begin(), vec.begin() + 3, myfunc);

    for(it = vec.begin(); it != vec.end(); it++){
        cout << *it << "\t";
    }

    return 0;
}
