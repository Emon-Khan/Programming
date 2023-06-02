#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dnum, num=0, binary[100];
    printf("Enter a decimal number: ");
    scanf("%d", &dnum);
    int i=0;
    while(dnum !=0)
    {
        binary[i]=dnum%2;
        dnum/=2;
        i++;
    }
    for(int j=i-1; j>=0; j--)
    {
        printf("%d", binary[j]);
    }
    return 0;
}
