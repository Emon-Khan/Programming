#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[100], freq[100], n;
    int count=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);

        freq[i] = -1;
    }

    for(int i=0; i<n; i++)
    {
        count=1;
        for(int j=i+1; j<n; j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i] !=0)
        {
            freq[i]=count;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(freq[i] !=0)
        {
            printf("\nElement %d: %d", ar[i], freq[i]);
        }
    }
    return 0;
}
