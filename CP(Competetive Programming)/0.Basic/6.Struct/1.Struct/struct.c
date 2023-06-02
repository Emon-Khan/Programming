#include<stdio.h>

struct person
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    struct person p[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("Enter information for person %d: ", i+1);
        printf("\nEnter Name: ");
        gets(p[i].name);
        printf("\nEnter Age: ");
        scanf("%d", &p[i].age);
        printf("\nEnter Salary: ");
        scanf("%f", &p[i].salary);
        fflush(stdin);
    }

    for(i=0; i<4; i++)
    {
        printf("Name: %s\n", p[i].name);
        printf("Age: %d\n", p[i].age);
        printf("Salary: %.2f\n", p[i].salary);
    }
    return 0;
}
