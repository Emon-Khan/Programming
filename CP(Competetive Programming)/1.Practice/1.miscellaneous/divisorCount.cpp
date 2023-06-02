#include <bits/stdc++.h>
#define m 1000000000
using namespace std;
typedef long long ll;
vector<ll> marked(m, 0);
vector<ll> prime;
void sieve(ll n)
{
    prime.clear();
    marked[0] = marked[1] = 1;
    for (ll i = 2 * 2; i <= n; i += 2)
    {
        marked[i] = 1;
    }
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (marked[i] == 0)
        {
            for (ll j = i * i; j <= n; j += i)
            {
                marked[j] = 1;
            }
        }
    }
    for (ll i = 2; i <= n; i++)
    {
        if (marked[i] == 0)
        {
            prime.push_back(i);
        }
    }
    // for (auto it : prime)
    // {
    //     cout << n << " " << it << " ";
    // }
    // cout << endl;
}
ll divisorCount(ll n)
{
    sieve(n);
    ll cnt = 0;
    // auto it = prime.begin();
    ll sz = prime.size();
    for (ll i = 0; i < sz; i++)
    {

        if (n % prime[i] == 0)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    ll n;
    cin >> n;
    ll mx = 1;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, divisorCount(x));
    }
    if (mx != 1)
    {
        mx += 1;
    }
    cout << mx << endl;
    return 0;
}