#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, c;
    int s;
    scanf("%d", &T);
    for(int t=1; t<=T; t++)
    {
        s = 0;
        scanf("%d", &N);
        for(int j=0; j<N; j++)
        {
            scanf("%d", &c);
            if(c>s)
            {
                s = c;
            }
        }
        printf("Case %d: %d\n", t, s);
    }
    return 0;
}
