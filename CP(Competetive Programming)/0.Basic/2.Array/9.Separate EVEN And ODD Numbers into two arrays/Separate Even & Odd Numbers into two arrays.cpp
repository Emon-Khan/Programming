#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[100], B[100], num[100];
    int n, e=0, t=0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(num[i]%2==0)
        {
            A[e] = num[i];
            e++;
        }
        else
        {
            B[t] = num[i];
            t++;
        }
    }
    for(int i=0; i<e; i++)
    {
        printf("\nEven: %d", A[i]);
    }
    for(int i=0; i<t; i++)
    {
        printf("\nOdd: %d", B[i]);
    }
}
