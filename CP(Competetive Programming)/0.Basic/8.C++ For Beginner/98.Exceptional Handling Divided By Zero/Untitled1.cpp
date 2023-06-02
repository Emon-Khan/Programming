#include<iostream>
#include<exception>
#include<string>

using namespace std;


int main(){
    int a = 10, b = 0;
    int c;
    try{
        if(b==0)
            throw "divided by zero error";
        c=a/b;
        cout << c << endl;
    }catch(const char *e){
        cout << "Exception occurred " << e;
    }
    return 0;
}
