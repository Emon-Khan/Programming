#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<long long int>s;
    long long int h;
    for(int i=0; i<4; i++)
    {
        cin>>h;
        s.insert(h);
    }
    int count=4-s.size();
    cout<<count<<endl;
    return 0;
}

