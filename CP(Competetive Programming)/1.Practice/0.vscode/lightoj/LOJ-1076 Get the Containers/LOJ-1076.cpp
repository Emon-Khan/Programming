#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;

int vessel[1100];
int n,m;

int container(int capacity)
{
    int counter=1,poured=0,i;
    for(i=0; i<n; i++)
    {
        if(vessel[i]>capacity) return INT_MAX;
        if(poured+vessel[i]<=capacity) poured+=vessel[i];
        else poured=vessel[i],counter++;
    }
    return counter;
}

int binary_s()
{
    int low,high,mid,i;
    low=0;
    high=1000000;
    for(i=0;i<50;i++)
    {
        mid=(low+high)/2;
        if(container(mid)<=m) high=mid;
        else low=mid+1;
    }
    return mid;
}

int main()
{
    int test,i,j;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%d%d",&n,&m);
        for(j=0; j<n; j++)
        {
            scanf("%d",&vessel[j]);
        }
        printf("Case %d: %d\n",i+1,binary_s());
    }
    return 0;
}
