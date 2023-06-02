#include<iostream>
using namespace std;

void show(const int *start,const int *end);

int main()
{
    int number[] = {21, 23, 27, 29, 31};
    show(number+2,number+4);

    return 0;
}

void show(const int *start,const int *end){
    const int *ptr;
    for(ptr=start; ptr!=end; ptr++){
        cout<<*ptr<<endl;
    }
}

