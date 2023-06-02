#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n =4;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<i; j++)
        {
            printf(" ");
        }
        for(int k = 0; k<n-i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
