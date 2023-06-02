#include<stdio.h>

int main()
{
    int x=10, y=20, temp;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);
    return 0;
}
