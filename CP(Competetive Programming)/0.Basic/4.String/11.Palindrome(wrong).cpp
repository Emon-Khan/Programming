#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[30]="abba";
    char s2[30];
    int x, y;

    int j, len = strlen(s), i, count=0;
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        s2[j]=s[i];
    }
    s2[j]='\0';
    printf("%s", s2);
    for(int k=0; s[k]!='\0'||s2[k]!='\0'||count!=0; k++)
    {
        if(s[k]=s2[k])
        {
            count++;
            //printf("%d\n", count);
        }
        else
        {
            count=0;
        }
    }
    //printf("%c\n", s[4]);
    //printf("%c\n", s2[4]);
    if(count!=0)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot Palindrome");
    }
    return 0;
}

