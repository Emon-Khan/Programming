#include<bits/stdc++.h>
using namespace std;

int main()
{
    int base, exp;
    long long int result=1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);
    while(exp !=0)
    {
        result *= base;
        --exp;
    }
    printf("%d", result);
    return 0;
}
