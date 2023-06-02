#include<iostream>
#include<stdio.h>
#include<string>
#include<iterator>
#include<utility>
#include<vector>
using namespace std;

int main()
{
    vector<pair<string, int>>v;
    vector<pair<string, int>>::iterator it;
    v.push_back(make_pair("Dipta", 37));
    v.push_back(make_pair("nabil", 73));

    for(it = v.begin(); it != v.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
