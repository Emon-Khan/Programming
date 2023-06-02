#include<iostream>
#include<exception>
#include<string>

using namespace std;


int main(){
    try{
        int a, b;
        double c;
        cout << "Please enter the first number: ";
        cin >> a;
        cout << "\nPlease enter the second number: ";
        cin >> b;

        if(b == 0)
            throw "divided by zero error";

        c = (double)a/b;
        cout << "\nResult: " << c << endl;
    }catch(const char *e){
        cout << "\nException occurred " << endl << e;
    }
    return 0;
}
