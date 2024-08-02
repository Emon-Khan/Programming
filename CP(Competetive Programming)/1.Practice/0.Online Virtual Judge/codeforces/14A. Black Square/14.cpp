#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    for(int i=0; i<4; i++)
    {
        scanf("%d", &a[i]);
    }
    string s;
    cin>>s;
    int sum=0;
    for(int i=0; i<s.length(); i++)
    {
        int z=s[i]-'0';
        sum+=a[z-1];
    }
    cout<<sum<<endl;
    return 0;
}
