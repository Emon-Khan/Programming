#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    int i=0, j=0;
    while(t[j]!='\0')
    {
        for(j=0; t[j]!='\0'; j++)
        {
            if(s[i]==t[j])
            {
                i++;
            }
        }
        printf("%d\n", i+1);
    }
    return 0;
}
