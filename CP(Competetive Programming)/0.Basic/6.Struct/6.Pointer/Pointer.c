#include<stdio.h>

int main()
{
    int x = 5, y=12, z=17;
    int *ptr;
    ptr = &x;
    printf("%d\n", *ptr);
    ptr = &y;
    printf("%d\n", *ptr);
    ptr = &z;
    printf("%d\n", *ptr);
    return 0;
}
