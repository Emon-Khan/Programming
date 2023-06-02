#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n = 4;
    for(int i = 0; i<4; i++){
        for(int j = 0; j<i; j++){
            printf(" ");
        }
        for(int l = 0; l< n-i; l++){
            printf("*");
        }
        for(int r = 0; r<n-i-1 ; r++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
