#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[5][5];
    int c;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d", &A[i][j]);
            if(A[i][j]==1)
            {
                c = abs(i-2)+abs(j-2);
            }
        }
    }
    printf("%d", c);
    return 0;
}
