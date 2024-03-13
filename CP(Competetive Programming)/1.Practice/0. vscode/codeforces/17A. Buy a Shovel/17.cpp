#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    scanf("%d %d", &k, &r);
    int i=1;
    while(true)
    {
        if((k*i)%10==r||(k*i)%10==0)
        {
            printf("%d", i);
            return 0;
        }
        i++;
    }
}
