#include <iostream>
using namespace std;
void buildMaxHeap(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[(i - 1) / 2])
        {
            int j = i;
            while (arr[j] > arr[(j - 1) / 2])
            {
                swap(arr[j], arr[(j - 1) / 2]);
                j = (j - 1) / 2;
            }
        }
    }
}
void heapSort(int arr[], int n)
{
    buildMaxHeap(arr, n);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        buildMaxHeap(arr, i);
    }
}
int main()
{
    int arr[] = {10, 20, 15, 17, 9, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, size);
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}