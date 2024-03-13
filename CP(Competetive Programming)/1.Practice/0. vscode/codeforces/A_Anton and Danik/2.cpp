#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int countA = 0, countD = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            countA++;
        }
        else if(s[i]='D')
        {
            countD++;
        }
    }

    if(countA>countD)
    {
        cout<<"Anton"<<endl;
    }
    else if(countD>countA)
    {
        cout<<"Danik"<<endl;
    }
    else if(countA == countD)
    {
        cout<<"Friendship"<<endl;
    }

    return 0;
}

