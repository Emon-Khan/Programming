#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float salary;
};
void display(struct person p)
{
    printf("\n%s\n", p.name);
    printf("%d\n", p.age);
    printf("%.2f\n", p.salary);
}
int main()
{
    struct person person1, person2;
    strcpy(person1.name, "Emon Khan");
    person1.age = 20;
    person1.salary = 20000.20;
    display(person1);


    strcpy(person2.name, "Jannat Nur");
    person2.age = 17;
    person2.salary = 17000.20;
    display(person2);
}
