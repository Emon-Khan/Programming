#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int size, a[50], pos;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the elements of array: ");
    for(int i = 0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nEnter the position: ");
    scanf("%d", &pos);
    if(pos<0 || pos>size)
    {
        printf("Invalid Position");
    }else{
        for(int i = pos-1; i<size; i++){
            a[i] = a[i+1];
        }
        size--;
    }
    for(int i = 0; i<size; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}
