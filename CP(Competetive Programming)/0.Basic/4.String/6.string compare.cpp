#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[] = "Emon Khan";
    char s2[] = "Emon Khan";
    int d = strcmp(s1,s2);

    if(d==0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }
    printf("\n%d", d);

    return 0;
}
