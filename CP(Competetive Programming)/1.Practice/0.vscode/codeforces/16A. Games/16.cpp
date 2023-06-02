#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int h[n], a[n];
    int count=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &h[i], &a[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(h[i]==a[j])
            {
                count++;
                if(a[i]==h[j])
                {
                    count++;
                }
            }
            else if(a[i]==h[j])
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
