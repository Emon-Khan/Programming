#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int T, a, u;
    int ara[50] = {0};
    scanf("%d", &T);
    for(int i = 0; i<T; i++)
    {
        scanf("%d", &a);
        if(a>0 && a<=10)
        {
            printf("%d %d\n", ara[a], abs(a-ara[a]));
            ara[a]++;
        }
        else if(a>10 && a<=20)
        {
            u = 10 - ara[a];
            printf("%d %d\n", u, abs(a-u));
            ara[a]++;
        }
        else if(a == 0){
            printf("0 0\n");
        }
    }
    return 0;
}
