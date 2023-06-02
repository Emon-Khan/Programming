#include<iostream>
using namespace std;

void show(int numbers[], int length);
int main()
{
    int numbers[] = {20, 36, 95, 56, 41};
    int length = 5;

    show(numbers, length);

    return 0;
}

void show(int numbers[], int length){
    for(int counter=0; counter<length; counter++){
        cout<< numbers[counter]<<endl;
    }
}
