#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
