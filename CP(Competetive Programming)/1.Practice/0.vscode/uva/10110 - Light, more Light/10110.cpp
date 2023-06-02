#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, temp;
    while(scanf("%lld", &n)==1)
    {
        if(n==0)
        {
            break;
        }
        temp = sqrt(n);
        if(temp*temp == n)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
