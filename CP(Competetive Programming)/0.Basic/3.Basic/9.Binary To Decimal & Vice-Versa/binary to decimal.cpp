#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bnum, num=0;
    printf("Enter a binary number: ");
    scanf("%d", &bnum);
    int i=0;
    while(bnum !=0)
    {
        num=num+(bnum%10)*pow(2, i);
        bnum/=10;
        i++;
    }
    printf("Decimal: %d", num);
    return 0;
}
