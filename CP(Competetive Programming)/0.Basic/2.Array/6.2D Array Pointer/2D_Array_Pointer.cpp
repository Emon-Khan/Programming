#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a[3][3] ={1, 4, 7, 2, 5, 8, 3, 6, 9};
    int *p;
    p = &a[0][0];
    printf("%d\t", a[0]+1);
    printf("%d\t", &a[0]+1);
    printf("%d\t", a+1);
    printf("%d", &a+1);

    return 0;
}
