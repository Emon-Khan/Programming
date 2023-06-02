#include<iostream>
using namespace std;

struct student{
    int rollNo;
    char sex;
    int age;
};

void display(student s);
void show(student *s);

int main()
{
    student Emon = {159, 'm', 20};

    show(&Emon);
    cout<<endl;
    display(Emon);

    return 0;
}

void display(student s){
    cout<<s.rollNo<<endl;
    cout<<s.sex<<endl;
    cout<<s.age<<endl;
}

void show(student *s){
    cout<<s->rollNo<<endl;
    cout<<s->sex<<endl;
    cout<<s->age<<endl;
    s->rollNo = 000;
}


