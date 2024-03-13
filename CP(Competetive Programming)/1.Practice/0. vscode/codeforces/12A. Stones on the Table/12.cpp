#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        i++;
    }
    printf("%d", count);
    return 0;
}
