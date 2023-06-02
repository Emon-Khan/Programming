#include<iostream>
using namespace std;

void show(const int num[],int limit);

int main()
{
    int number[] = {21, 23, 27, 29, 31};
    show(number,5);

    return 0;
}

void show(const int num[],int limit){
    for(int counter=0; counter<limit; counter++){
        cout<<num[counter]<<endl;
    }
}

