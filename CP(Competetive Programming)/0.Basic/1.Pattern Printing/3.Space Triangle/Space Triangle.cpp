#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n = 4;
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            printf(" ");
        }
        for(int k = 0; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
