#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[30]="Emon Khan";
    char s2[30];

    int j, len = strlen(s), i;
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        s2[j]=s[i];
    }
    s2[j]='\0';
    printf("%s", s2);
    return 0;
}
