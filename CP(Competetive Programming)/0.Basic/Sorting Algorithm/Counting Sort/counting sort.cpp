#include<iostream>
#include<stdio.h>
using namespace std;
int countSort(int n, int k)
{
    int ar[50] = {2, 1, 5, 0, 1, 5, 6, 7, 2, 9, 1, 0, 8, 5, 4, 6, 0};
    int count[50], arsort[50];

    for(int i = 0; i<n; i++)
    {
        ++count[ar[i]];
    }
    for(int i = 1; i<=k; i++)
    {
        count[i] = count[i] + count[i-1];
    }
    for(int i = n-1; i>=0; i--)
    {
        arsort[--count[ar[i]]] = ar[i];
    }
    for(int i = 0; i<n; i++)
    {
        ar[i] = arsort[i];
    }
    for(int i = 0; i<n; i++)
    {
        printf("%d\t", ar[i]);
    }
}


int main()
{
    countSort(17, 9);
    return 0;
}
