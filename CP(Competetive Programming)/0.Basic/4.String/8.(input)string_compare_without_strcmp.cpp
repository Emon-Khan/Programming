#include<bits/stdc++.h>
using namespace std;
int compare(char a[], char b[])
{
    int i;
    for(i=0; a[i]==b[i]&&a[i]&&b[i]; i++);
    return a[i]-b[i];
}
int main()
{
    char a[100], b[100];
    printf("Enter two string: ");
    scanf("%s %s", &a, &b);
    if(compare(a,b)==0)
    {
        puts("Equal");
    }
    else
    {
        puts("Not Equal");
    }
    return 0;
}
