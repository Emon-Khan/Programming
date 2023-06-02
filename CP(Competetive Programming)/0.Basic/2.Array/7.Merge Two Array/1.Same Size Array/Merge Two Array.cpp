#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[100], B[100], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d", &B[i]);
    }
    for(int i=0; i<n; i++){
        A[n+i]=B[i];
    }
    for(int i=0; i<n+n; i++){
        printf("%d\t", A[i]);
    }
    return 0;
}
