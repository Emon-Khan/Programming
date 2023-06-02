#include <iostream>
#include <utility>
#include <vector>
#include <bitset>
typedef long long ll;
using namespace std;
bitset<1000000> isPrime;
vector<ll> primes;
void FastSieve(ll N)
{ // Faster, Will generate all primes <= N
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    for (ll i = 3; i * i <= N; i += 2)
    { // Ignoring even numbers, looping till sqrt(N)
        if (isPrime[i])
        {
            for (ll j = i * i; j <= N; j += i)
                isPrime[j] = 0;
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= N; i += 2)
        if (isPrime[i])
            primes.push_back(i);
}
// Note: this code should be executed after calculating Sieve()
vector<pair<ll, ll>> primeFactor(ll m)
{
    vector<pair<ll, ll>> factor;
    for (ll i = 0; i < (ll)primes.size() && primes[i] <= m; i++)
    {
        bool first = 1;
        while (m % primes[i] == 0)
        {
            if (first)
            {
                factor.push_back({primes[i], 0});
                first = 0;
            }
            factor.back().second++;
            m /= primes[i];
        }
    }
    return factor;
}
int main()
{
    FastSieve(1000);
    for (auto it = primeFactor(190).begin(); it != primeFactor(190).end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout<<primeFactor(190).size()<<endl;
}