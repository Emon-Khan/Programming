#include<bits/stdc++.h>
#define pb push_back
#define ff first
#define ss second
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'

const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> Carray;

using namespace std;
vi primes;
bool ar[90000001];
void sieve()
{
    int maxN = 90000000;
    ar[0]=ar[1]=true;
    for(int i=2; i*i<=maxN; i++)
    {
        if(!ar[i])
        {
            for(int j=i*i; j<=maxN; j+=i)
            {
                ar[j]=true;
            }
        }
    }
    for(int i=2; i<=maxN; i++)
    {
        if(!ar[i])
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    int Q, K;
    cin>>Q;
    sieve();
    while(Q--)
    {
        cin>>K;
        cout<<primes[K-1]<<endl;
    }
    return 0;
}
