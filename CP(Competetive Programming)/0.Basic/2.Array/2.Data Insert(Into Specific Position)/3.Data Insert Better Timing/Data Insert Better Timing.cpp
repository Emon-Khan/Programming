#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int array[50], size, num, pos, temp;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    for(int i = 0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i = 0; i<size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\nEnter the element you wanna insert: ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);
    if(pos<=0 || pos>size)
    {
        printf("Invalid Position");
    }
    else
    {

        for(int j = size-1; j>=pos-1; j--)
        {
            temp = array[pos-1];
            array[pos-1] = num;
            array[size] = temp;
            break;
        }
        for(int j = 0; j<size+1; j++)
        {
            printf("%d\t", array[j]);
        }
    }
    return 0;

}

