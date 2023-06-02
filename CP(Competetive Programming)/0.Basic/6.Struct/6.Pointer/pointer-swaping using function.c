#include<stdio.h>

void swapping(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("x = %d\n", *ptr1);
    printf("y = %d\n", *ptr2);
}
int main()
{
    int x=10, y=20;
    printf("Before Swapping: ");
    printf("%d\t", x);
    printf("%d\n", y);

    swapping(&x, &y);
}
