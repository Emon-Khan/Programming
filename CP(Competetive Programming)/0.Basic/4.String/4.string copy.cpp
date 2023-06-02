#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[] = "Madness at its best";
    char s2[30];
    int i=0;
    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
    printf("%s", s2);
    strcpy(s2, s1);
    printf("\n%s", s2);
    return 0;
}
