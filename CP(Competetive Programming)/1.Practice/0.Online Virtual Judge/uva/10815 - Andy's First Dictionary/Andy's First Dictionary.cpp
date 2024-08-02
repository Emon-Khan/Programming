#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int>mapp;
    map<string, int>:: iterator it;
    string str;
    while(getline(str, cin)){
        mapp[str]++;
    }
    for(it = mapp.begin(); it !=mapp.end(); it++)
    {
        cout<<it->first<<endl;
    }
    return 0;

}
