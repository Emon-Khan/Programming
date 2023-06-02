#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a[50], size, num, pos;
    printf("Enter Size of array: ");
    scanf("%d", &size);
    printf("Enter elements of array: ");
    for(int i = 0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nEnter data you want to input: ");
    scanf("%d", &num);
    printf("Enter position: ");
    scanf("%d", &pos);
    if(pos<=0 || pos>size+1)
    {
        printf("Invalid Position");
    }
    else
    {
        for(int i = size-1; i>=pos-1; i--)
        {
            a[i+1] = a[i];
        }
        a[pos-1] = num;
        //size++;
        for(int j = 0; j<size+1; j++)
        {
            printf("%d\t", a[j]);
        }
    }
    return 0;
}
