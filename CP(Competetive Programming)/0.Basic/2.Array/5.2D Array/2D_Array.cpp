#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a[3][4];

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
