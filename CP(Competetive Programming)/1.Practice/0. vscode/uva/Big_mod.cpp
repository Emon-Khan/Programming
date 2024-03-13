#include<bits/stdc++.h>
using namespace std;
int mod(int b, int p, int m)
{
    if(p==0)
    {
        return 1;
    }
    if(p%2==0)
    {
        return (mod(b,p/2,m)*mod(b,p/2,m))%m;
    }
    else
    {
        return (mod(b,p-1,m)*(b%m))%m;
    }
}
int main()
{
    int b, p, m;
    while(scanf("%d %d %d", &b, &p, &m))
    {
        printf("%d\n", mod(b, p, m));
        /*for(long long i = 1; i<=P; i++)
        {
            ans = (ans * B)%M;
        }
        printf("%lli\n", ans);*/
    }
    return 0;
}
