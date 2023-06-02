#include<bits/stdc++.h>
using namespace std;
int calculation(int step, int mod)
{
    int ans = 0, flag = 0;
    do
    {
        ans = (ans + step)%mod;
        flag++;
        //cout<<flag<<endl;
        //cout<<ans<<endl;
    }
    while(ans != 0);
    //cout<<flag<<endl;
    return flag;
}
int main()
{
    int step, mod;
    while(scanf("%d %d", &step, &mod)==2)
    {
        if(calculation(step, mod)==mod)
        {
            printf("%10d%10d    %s\n\n",step, mod, "Good Choice");
        }
        else
        {
            printf("%10d%10d    %s\n\n",step, mod, "Bad Choice");
        }
    }
}
