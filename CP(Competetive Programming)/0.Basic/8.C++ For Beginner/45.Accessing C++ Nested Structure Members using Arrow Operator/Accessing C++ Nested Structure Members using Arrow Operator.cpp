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
    address addr;
};


int main()
{
    student Emon;
    Emon.age = 20;
    Emon.rollNo = 357;

    Emon.addr.houseNo = 14;
    Emon.addr.streetName = "vogas street";

    cout<<Emon.addr.streetName<<endl;
    cout<<Emon.addr.houseNo<<endl;
    cout<<endl;
    cout<<Emon.age<<endl;
    cout<<Emon.rollNo<<endl;

    return 0;
}


