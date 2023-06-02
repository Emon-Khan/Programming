#include <bits/stdc++.h>
#define m 1000000
using namespace std;
typedef long long ll;
// vector<bool> marked(m, 0);
// vector<ll> prime;
// void sieve(ll n)
// {
//     marked[0] = marked[1] = 1;
//     for (ll i = 2 * 2; i <= n; i += 2)
//     {
//         marked[i] = 1;
//     }
//     for (ll i = 3; i * i <= n; i += 2)
//     {
//         if (marked[i] == 0)
//         {
//             for (ll j = i * i; j <= n; j += i)
//             {
//                 marked[j] = 1;
//             }
//         }
//     }
// }
// void phi(ll n)
// {
//     sieve(n);
//     ll sz = prime.size();
//     ll ans = n;
//     for (ll i = 0; i < sz; i++)
//     {
//         if (n % prime[i] == 0)
//         {
//             ans -= (ans / prime[i]);
//         }
//     }
//     cout << ans << endl;
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     phi(n);
//     return 0;
// }

////////////2nd Approach///////////////////
ll phi(ll n)
{
    ll ret = n;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            ret -= ret / i;
        }
    }
    if (1 < n)
        ret -= ret / n;
    return ret;
}
int main()
{
    ll n;
    cin >> n;
    cout << phi(n) << endl;
}