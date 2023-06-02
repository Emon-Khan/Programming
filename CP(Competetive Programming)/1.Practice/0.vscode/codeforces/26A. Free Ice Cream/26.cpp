#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k=0;
    long long int x, d;
    char s;
    cin>>n>>x;
    for(int i=0; i<n; i++)
    {
        cin>>s>>d;
        if(s == '+')
        {
            x+=d;
        }
        else if(s == '-')
        {
            if(x<d)
            {
                k++;
            }
            else
            {
                x-=d;
            }
        }
    }
    cout<<x<<" "<<k<<endl;
    return 0;
}
