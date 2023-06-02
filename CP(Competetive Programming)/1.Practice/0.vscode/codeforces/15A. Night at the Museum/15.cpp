#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum=0, diff, value=26;
    int s1='a';
    int len=s.size();
    for(int i=0; i<len; i++)
    {
        diff=abs(s[i]-s1);
        if(diff>13)
        {
            sum+=value-diff;
        }
        else if(diff<=13)
        {
            sum+=diff;
        }
        s1=s[i];
    }
    cout<<sum;
    return 0;
}
