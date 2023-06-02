#include<iostream>
#include<string>
using namespace std;

class myclass{
private:
	string *name;
	int *age;
public:
	myclass(string iname, int iage){
		name = new string;
		age = new int;

		*name = iname;
		*age = iage;
	}

	void display(){
		cout<<"Hey my name is "<< *name << " and i am "<< *age << " years old."<<endl;
	}

	~myclass(){
		delete name;
		delete age;
		cout<<"All memories are released"<<endl;
	}
};

int main(){
	myclass *Emon = new myclass("Emon", 21);
	Emon->display();
	delete Emon;

	return 0;
}
