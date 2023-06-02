#include<iostream>
#include<string>
using namespace std;

struct address{
    int houseNo;
    string streetName;
};
struct student{
    int rollNo;
    int age;
    address *addr;
};


int main()
{
    student Emon;
    student *Emonptr;

    Emonptr = &Emon;

    Emonptr->age = 20;
    Emonptr->rollNo = 357;

    address adr = {35, "Madina"};

    Emonptr->addr = &adr;

    cout<<Emonptr->age<<endl;
    cout<<Emonptr->rollNo<<endl;

    //Emonptr->addr->houseNo = 14;
    //Emonptr->addr->streetName = "Makka";

    cout<<Emonptr->addr->streetName<<endl;
    cout<<Emonptr->addr->houseNo<<endl;
    cout<<endl;


    return 0;
}


