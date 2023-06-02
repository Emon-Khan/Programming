#include<iostream>
#include<string>
using namespace std;

int main()
{
    int *pointer = NULL;
    cout<<"How many items you are gonna enter?"<<endl;
    int input;
    cin>>input;

    pointer = new int[input];

    int temp;

    for(int  counter = 0; counter < input; counter++){
        cout<<"Enter the item "<<counter+1<<endl;
        cin>>temp;
        *(pointer+counter) = temp;
    }
    for(int  counter = 0; counter < input; counter++){
        cout<<"The item "<<counter+1<<" "<<*(pointer+counter)<<endl;
    }

    delete[]pointer;

    return 0;
}


