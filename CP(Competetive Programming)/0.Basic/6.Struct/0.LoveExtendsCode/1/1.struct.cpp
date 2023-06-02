#include<iostream>
#include<string.h>
using namespace std;

struct myStruct{
    string name;
    int age;
    double height;
};

int main()
{
    struct myStruct s1;
    struct myStruct s2;

    //strcpy(s1.name, "EMN");
    s1.name = "EMN";
    s1.age = 23;
    s1.height = 5.11;

    //printf("%s\n", s1.name);
    cout<<s1.name<<endl;
    printf("%d\n", s1.age);
    printf("%.2lf\n", s1.height);
    return 0;
}
