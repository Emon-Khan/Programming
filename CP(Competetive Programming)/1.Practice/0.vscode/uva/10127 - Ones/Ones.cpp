#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, c;
    while(scanf("%d", &n)==1)
    {
        c=0;
        do
        {
            p = (p*10+1)%n;
            c++;
        }
        while(p!=0);
        printf("%d\n", c);
    }
    return 0;
}
