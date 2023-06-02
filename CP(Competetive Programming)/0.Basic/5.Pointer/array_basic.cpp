#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1;
    int *p;
    p = &a;
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", p); //address of a
    printf("%d\n", *p);
    printf("%d\n", &p); //address of p

    *p = 8;
    printf("\n\n%d\n", *p);
    printf("%d\n", a);

    return 0;

}
