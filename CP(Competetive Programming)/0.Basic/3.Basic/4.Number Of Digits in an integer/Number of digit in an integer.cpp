#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    int count=0;
    printf("Enter the number: ");
    scanf("%lld", &n);
    while(n !=0)
    {
        n/=10;
        count++;
    }
    printf("Number of digits in an integer: %d", count);
    return 0;
}
