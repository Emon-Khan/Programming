#include<stdio.h>

struct person{
    int x;
    char y[5];
};
int main()
{
    typedef struct person human;
    human h;
    h.x = 17;
    strcpy(h.y, "Azar Bizan");

    printf("%d\n", h.x);
    printf("%s\n", h.y);
    return 0;
}

