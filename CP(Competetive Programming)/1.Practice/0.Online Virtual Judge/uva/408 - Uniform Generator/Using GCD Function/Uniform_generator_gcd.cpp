#include<bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return gcd(y, x%y);
    }
}
int main()
{
    int step, mod;
    while(scanf("%d %d", &step, &mod)==2)
    {
        printf("%10d%10d    %s\n\n", step, mod, gcd(step, mod)==1 ? "Good Choice" : "Bad Choice");
    }
    return 0;
}

