#include<iostream>
using namespace std;

struct student{
    int rollNo;
    char sex;
};

int main()
{
    student Emon;
    student *Emonptr;

    student Zlatan;
    student *Zlatanptr;

    Emonptr = &Emon;

    Zlatanptr = &Zlatan;

    Emon.rollNo = 147;
    Emonptr -> sex = 'm';

    Zlatanptr -> rollNo = 951;
    Zlatanptr -> sex = 'm';

    cout << Emonptr -> sex << endl;
    cout << Emonptr -> rollNo << endl;

    cout << Zlatan.sex << endl;
    cout << Zlatanptr -> rollNo << endl;

    return 0;
}


