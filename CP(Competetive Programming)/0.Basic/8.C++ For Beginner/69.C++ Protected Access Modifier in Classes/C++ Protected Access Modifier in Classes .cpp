#include<iostream>
#include<string>
using namespace std;

class person{
protected:
    string name;

public:
    void setName(string iname){
        name = iname;
    }
};

class pupil : public person{
public:
    void display(){
        cout<<name<<endl;
    }
};

int main(){
    pupil Hodor;
    Hodor.setName("Emon");
    Hodor.display();
    return 0;
}


