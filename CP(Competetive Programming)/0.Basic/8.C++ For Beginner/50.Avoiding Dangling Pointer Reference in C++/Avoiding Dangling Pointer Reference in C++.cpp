#include<iostream>
#include<string>
using namespace std;

int main()
{
    int *pointer = nullptr;

    pointer = new int;

    if(pointer != nullptr){
        *pointer = 10;
        cout<<*pointer<<endl;
        delete pointer;
    }else{
        cout<<"Memory is not allocated"<<endl;
    }

    return 0;
}


