#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[100], B[100], m, n;
    printf("Enter the size of two array respectively: ");
    scanf("%d %d", &m, &n);
    printf("\n\n");
    for(int i=0; i<m; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\n\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &B[i]);
    }
    for(int i=0; i<n; i++)
    {
        A[m+i]=B[i];
    }
    printf("\n\n");
    for(int i=0; i<m+n; i++)
    {
        printf("%d\t", A[i]);
    }
    return 0;
}
