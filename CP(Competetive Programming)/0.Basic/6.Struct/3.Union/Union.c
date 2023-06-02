#include<stdio.h>

union test1{
    int x,y;
};
union test2{
    char x;
    int y;
};
union test3{
    char x[20];
    int y;
};
struct su1{
    int x,y;
};
struct su2{
    char x;
    int y;
};
struct su3{
    char x[20];
    int y;
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct su1 s1;
    struct su2 s2;
    struct su3 s3;
    printf("Size of t1: %d\n", sizeof(t1));
    printf("Size of t2: %d\n", sizeof(t2));
    printf("Size of t3: %d\n", sizeof(t3));

    printf("Size of s1: %d\n", sizeof(s1));
    printf("Size of s2: %d\n", sizeof(s2));
    printf("Size of s3: %d\n", sizeof(s3));
    return 0;
}
