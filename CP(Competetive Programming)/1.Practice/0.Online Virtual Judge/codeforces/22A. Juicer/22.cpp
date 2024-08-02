#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d, a, waste=0, count=0;
    cin>>n>>b>>d;
    while(n--)
    {
        cin>>a;
        if(a>b)
        {
            continue;
        }
        else
        {
            waste+=a;
            if(waste>d)
            {
                count++;
                waste=0;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}
