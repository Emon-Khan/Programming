#include<bits/stdc++.h>
using namespace std;
int isPalindrome(char s[])
{
    int l=strlen(s);
    for (int i=0; i<l/2; i++)
    {
        if(s[i]!=s[l-1-i])
        {
            return (0);
        }
    }
    return 1;
}
int main()
{
    char str[20];
    int t=2;
    while (t--)
    {
        gets(str);
        if(isPalindrome(str))
        {
            printf("%s is Palindrome\n", str);
        }
        else
        {
            printf("%s is not Palindrome\n", str);
        }

    }
}
