#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[105];
    int length, a=0;
    scanf("%s", &s);
    length=strlen(s);
    for(int i=0; i<length; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(s[i]==s[j])
            {
                s[i]='0';
            }
        }
    }
    for(int j=0; j<length; j++)
    {
        if(s[j]!='0')
        {
            a++;
        }
    }

    if((a%2)==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
