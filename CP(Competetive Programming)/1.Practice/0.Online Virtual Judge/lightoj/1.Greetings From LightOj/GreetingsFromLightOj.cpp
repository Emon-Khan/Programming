#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int T, a, b, sum = 0;
    scanf("%d", &T);
    for(int i=1; i<=T; i++)
    {
        scanf("%d %d", &a, &b);
        sum = a+b;
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}
