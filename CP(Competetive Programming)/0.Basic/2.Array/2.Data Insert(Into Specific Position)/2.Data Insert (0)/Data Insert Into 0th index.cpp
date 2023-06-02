#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int array[50];
    int size, pos, num;
    printf("Enter size of array: ");
    scanf("%d ", &size);
    for(int i = 0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i = 0; i<size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\nEnter the number you want to insert: ");
    scanf("%d", &num);
    for(int j = size-1; j>=0; j--)
    {
        array[j+1] = array[j];
    }
    array[0] = num;
    //size++;
    for(int j = 0; j<size+1; j++)
    {
        printf("%d\t", array[j]);
    }
    return 0;
}

