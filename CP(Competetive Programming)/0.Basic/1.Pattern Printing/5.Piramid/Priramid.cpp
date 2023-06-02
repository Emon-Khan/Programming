#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n = 4;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            printf(" ");
        }
        for(int k = 0; k<=i; k++)
        {
            printf("*");
        }
        for(int r = 0; r<i; r++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
