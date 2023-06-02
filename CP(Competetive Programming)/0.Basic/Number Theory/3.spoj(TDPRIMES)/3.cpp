#include<bits/stdc++.h>
#define max 100000000
#define vi vector<int>
using namespace std;
bool ar[max];

int main()
{
    vi primes;
    ar[0]=ar[1]=true;
    for(int i=2; i*i<=max; i++)
    {
        if(!ar[i])
        {
            for(int j=i*i; j<=max; j+=i)
            {
                ar[j]=true;
            }
        }
    }

    for(int i=2; i<=max; i++)
    {
        if(!ar[i])
        {
            primes.push_back(i);
        }
    }
    for(int i=0; i<=primes.size(); i++)
    {
        if(i%100==1)
        {
            cout<<primes[i-1]<<endl;
        }
    }
    return 0;
}
