#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=0,d=0;
    scanf("%d", &n);
    int v[n];
    int l=0, r=n-1;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(v[l]>v[r])
            {
                s+=v[l];
                ++l;
            }
            else if(v[r]>v[l])
            {
                s+=v[r];
                --r;
            }
            else
            {
                s+=v[l];
            }
        }
        else
        {
            if(v[l]>v[r])
            {
                d+=v[l];
                ++l;
            }
            else if(v[r]>v[l])
            {
                d+=v[r];
                --r;
            }
            else
            {
                d+=v[l];
            }
        }
    }

    printf("%d %d", s, d);
    return 0;
}
