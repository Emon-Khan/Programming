#include<iostream>
#include<string>
using namespace std;

class person{
public:
    string *name;
    int age;

    person(string name,int age){
        this->name = new string(name);
        this->age = age;
    }

    void changeNameandAge(string name,int age){
        *(this->name) = name;
        this->age = age;
    }

    person(const person &p){
        cout<<"Copy constructor is called"<<endl;
        name = new string(*p.name);
        age = p.age;
    }

    void introduce(){
        cout<<"Hey i am "<<*name<<" and i am "<<age<<" years old."<<endl;
    }
};

int main()
{
    person Emon("Emon", 20);
    Emon.introduce();

    person duplicateEmon = Emon;
    duplicateEmon.introduce();

    Emon.changeNameandAge("Khan", 21);
    Emon.introduce();
    duplicateEmon.introduce();


    return 0;
}
