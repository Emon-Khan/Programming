#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[15], ch;
    int i, cl, sl, digit;
    gets(s);

    i=cl=sl=digit=0;
    while((ch=s[i])!='\0')
    {
        if(ch>='a'&& ch<='z')
        {
            sl++;
        }
        else if(ch>='A' && ch<='z')
        {
            cl++;
        }
        else if(ch>='0' && ch<='9')
        {
            digit++;
        }
        i++;
    }
    printf("\nCapital Letter: %d", cl);
    printf("\nSmall Letter: %d", sl);
    printf("\nDigit: %d", digit);

    return 0;
}
