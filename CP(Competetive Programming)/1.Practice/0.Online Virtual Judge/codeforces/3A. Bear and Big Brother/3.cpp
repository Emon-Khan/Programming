#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i=0;
    for(i=0; a<=b; i++)
    {
        a*=3;
        b*=2;
    }

    printf("%d", i);
    return 0;
}
