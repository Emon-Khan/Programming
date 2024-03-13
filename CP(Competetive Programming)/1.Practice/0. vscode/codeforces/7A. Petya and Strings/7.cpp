/*#include<bits/stdc++.h>
using namespace std;
int compare(char a[15], char b[15])
{
    int i;
    for(i=0; a[i]==b[i] && a[i]==!'\0' && b[i]==!'\0'; i++);
    return a[i]-b[i];
}
int main()
{
    char a[15];
    gets(a);
    char b[15];
    gets(b);
    strlwr(a);
    strlwr(b);
    printf("\n%s", a);
    printf("\n%s", b);
    printf("\n%d", compare(a,b));
    if(compare(a,b)==0)
    {
        printf("\n0");
    }
    else if(compare(a,b)<0)
    {
        printf("\n-1");
    }
    else if(compare(a,b)>0)
    {
        printf("\n1");
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[105], s2[105];
    scanf("%s %s", &s1, &s2);
    int i, length = strlen(s1);
    for(i=0; i<length; i++)
    {
        s1[i]=tolower(s1[i]);
    }
    for(i=0; i<length; i++)
    {
        s2[i]=tolower(s2[i]);
    }
    for(i=0; i<length; i++)
    {
        if(s1[i]!=s2[i])
        {
            break;
        }
    }
    if(i==length)
    {
        printf("0");
    }
    else
    {
        for(i=0; i<length; i++)
        {
            if(s1[i]<s2[i])
            {
                printf("-1");
                break;
            }
            else if(s1[i]>s2[i])
            {
                printf("1");
                break;
            }
        }
    }
    return 0;
}



