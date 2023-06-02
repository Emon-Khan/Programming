#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a[50], size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter elements of array: ");
    for(int i = 0; i<size; i++){
        scanf("%d", &a[i]);
    }
    for(int j = 0; j<size; j++){
        printf("%d\t", a[j]);
    }
    return 0;
}
