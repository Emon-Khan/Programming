#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[101], m, x, y;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    while(m--)
    {
        scanf("%d %d", &x, &y);
        a[x-1]+=(y-1);
        a[x+1]+=(a[x]-y);
        a[x]=0;
    }

    for(int i=1; i<=n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}

