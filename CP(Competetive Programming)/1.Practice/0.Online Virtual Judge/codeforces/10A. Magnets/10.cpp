#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int v;
    int a=0, b=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &v);
        if(v!=a){
            b++;
        }
        a=v;
    }

    printf("%d", b);

    return 0;
}
