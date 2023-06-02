#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n = 3;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            printf(" ");
        }
        for(int l = 0; l<=i; l++){
            printf("*");
        }
        for(int r = 0; r<i; r++){
            printf("*");
        }
        printf("\n");
        for(int e = 0; e<n-1; e++){
            for(int es = 0; es<=e; es++){
                printf(" ");
            }
            for(int el = 0; el<n-1; el++){
                printf("*");
            }

        }
        printf("\n");
    }
    return 0;
}

