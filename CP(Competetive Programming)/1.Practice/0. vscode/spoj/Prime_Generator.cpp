// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define ll MAX = 32000;
// void sieve()
// {
//     vector<bool> p;
//     p[0] == p[1] = true;
//     for(int i = 2; i<=MAX; i++){
//         p
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         ll n, m;
//         cin >> n >> m;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 32000
bool Marked[MAX];
vector<int> p;
void sieve()
{
    Marked[0] = Marked[1] = true;
    for (int i = 3; i * i < MAX; i += 2)
    {
        if (!Marked[i])
        {
            for (int j = i * i; j < MAX; j += i)
            {
                Marked[j] = true;
            }
        }
    }
    p.push_back(2);
    for (int i = 3; i < MAX; i += 2)
    {
        if (!Marked[i])
        {
            p.push_back(i);
        }
    }
}
void seg_sieve(ll l, ll r)
{
    sieve();
    bool isPrime[r - l + 1] = {0};
    if (l == 1)
        isPrime[0] = 1;
    vector<ll> primes;
    ll base;
    for (ll i = 0; p[i] * p[i] <= r; i++)
    {
        base = (l / p[i]) * p[i];
        while (base <= r)
        {
            if (base < l)
            {
                base += p[i];
            }
            if (base != p[i])
            {
                isPrime[base - l] = 1;
            }
            // isPrime[base - l] = 1;
            base += p[i];
        }
    }
    /*if (l == 1)
    {
        isPrime[0] = 1;
        isPrime[1] = isPrime[2] = 0;
    }*/

    for (ll i = l; i <= r; i++)
    {
        if (!isPrime[i - l])
        {
            primes.push_back(i);
        }
    }
    for (auto it : primes)
    {
        cout << it << endl;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n, m;
        cin >> n >> m;
        seg_sieve(n, m);
    }
    return 0;
}