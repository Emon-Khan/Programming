#include<stdio.h>
#include<stdlib.h>
struct mystruct{
    int age;
    double height;
};

int main()
{
    /*struct mystruct s1;
    s1.age = 10;
    s1.height = 4.7;
    struct mystruct *ps1;
    ps1 = &s1;
//    (*ps1).age = 21;
//    ps1 -> age = 23;
//    (*ps1).height = 5.10;
//    ps1 -> height = 5.11;
    printf("%d\n", ps1->age);
    printf("%.2f\n", ps1->height);*/
//    Dynamic Memory Allocation
    struct mystruct *ps;
    ps = (struct mystruct*) malloc(sizeof(struct mystruct));
    ps->age = 20;
    ps->height = 5.11;
    printf("%d\n", ps->age);
    printf("%.2f\n", ps->height);
    return 0;
}
