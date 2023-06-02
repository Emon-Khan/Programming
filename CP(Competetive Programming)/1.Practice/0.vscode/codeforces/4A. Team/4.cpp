#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, v, t;
    scanf("%d", &n);
    int count=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d", &p, &v, &t);
        if(p==1&&v==1||p==1&&t==1||v==1&&t==1)
        {
            count++;
        }
        else
        {


        }
    }
    printf("%d", count);
    return 0;
}
