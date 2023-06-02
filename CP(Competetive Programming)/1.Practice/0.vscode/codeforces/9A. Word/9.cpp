#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[105];
    scanf("%s", &s);
    int a,b, length;
    a=0;
    b=0;
    length = strlen(s);
    for(int i=0; i<length; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            a++;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            b++;
        }
    }

    if(a>b)
    {
        printf("%s", strupr(s));
    }
    else if(b>a)
    {
        printf("%s", strlwr(s));
    }
    else if(a==b)
    {
        printf("%s", strlwr(s));
    }

    return 0;

}
