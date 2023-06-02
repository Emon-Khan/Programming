#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[] = "Emln Khan";
    char s2[] = "Emon Khan";
    int count=0, i=0;
    int a = strlen(s1);
    int b = strlen(s2);
    if(a=b)
    {
        do
        {
            if(s1[i]=s2[i])
            {
                i++;
                count++;
            }
            else
            {
                count=0;
            }

        }
        while(s1[i]!='\0'|| s2[i]!='\0'||count!=0);
        if(count !=0)
        {
            printf("Strings are equal");
        }
        else
        {
            printf("Strings are not equal");
        }
    }
    else
    {
        printf("Strings are not equal");
    }

    return 0;
}
