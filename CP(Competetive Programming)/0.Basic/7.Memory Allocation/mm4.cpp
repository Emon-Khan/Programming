#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size ";
    cin >> size;
    int *ptr;
    ptr = new int[size];
    cout << "Enter the elements " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element :";
        cin >> ptr[i];
    }
    cout << "\nElements that you have entered : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element : " << ptr[i] << endl;
    }
    delete[] ptr;
    return 0;
}
