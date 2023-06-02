#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int ar[10][10] = {{1, 4, 5, 16, 17}, {2, 3, 6, 15, 18}, {9, 8, 7, 14, 19}, {10, 11, 12, 13, 20}, {25, 24, 23, 22, 21}};
    int T;
    long long int value;
    scanf("%lld", &T);
    for(int k = 1; k<=T; k++)
    {
        scanf("%lld", &value);
        for(int i = 0; i<5; i++)
        {
            for(int j = 0; j<5; j++)
            {
                if(value==ar[i][j])
                {
                    printf("Case %d: %d %d\n", k, j+1, i+1);
                }
            }
        }
    }
}
