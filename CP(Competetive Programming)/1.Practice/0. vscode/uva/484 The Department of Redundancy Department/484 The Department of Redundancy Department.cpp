#include<bits/stdc++.h>
using namespace std;
vector<int>v;
map<int, int>m;

int main()
{
    int n;

    while(cin>>n)
    {
        if(m[n]==0)
        {
            v.push_back(n);
            m[n]=1;
        }
        else
        {
            m[n]=m[n]+1;
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<< " "<<m[v[i]]<<endl;
    }
    return 0;
}
