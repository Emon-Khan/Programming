#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
/***
**     Author: Rois Uddin Khan Emon
**     Bangladesh University of Business and Technology
**     Dept. of CSE.
***    Features:Debugging Features had been added.
***    version: 0.1
***/

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string.h>
#include <string>
#include <cwctype>
#include <math.h>
#include <vector>
#include <iterator>
#include <map>
#include <set>
#include <stack>
#include <algorithm>
#include <bitset>
#include <limits.h>

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define set_bits __builtin_popcountll
#define Sqr(n) (n * n)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define Sort(v) sort(v.begin(), v.end())
#define Mxe(v) *max_element(v.begin(), v.end())
#define Mne(v) *min_element(v.begin(), v.end())

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// const double PI = acos(-1.0);
const ll maxn = 1e5 + 7;
const int mx = 1e8 + 10;

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
/* Solution 1 */
// const int n = INT_MAX;
// const int nn = sqrt(n);
/*bitset<1000000> isPrime;
vector<ll> primes;
void FastSieve(ll N)
{
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    for (ll i = 3; i * i <= N; i += 2)
    {
        for (ll j = i * i; j <= N; j += i)
        {

            if (isPrime[i])
            {
                isPrime[j] = 0;
            }
        }
    }

    primes.pb(2);
    for (ll i = 3; i <= N; i += 2)
    {
        if (isPrime[i])
        {
            primes.pb(i);
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    FastSieve(INT_MAX);
    ll g;
    while (cin >> g && g)
    {
        vector<ll> factor;
        if (g < 0)
        {
            cout << g << " = ";
            factor.pb(-1);
            g *= -1;
        }
        int i = 0;
        while (!isPrime[g])
        {
            if (g % primes[i] == 0)
            {
                g = g / primes[i];
                factor.pb(primes[i]);
            }
            else
            {
                i++;
            }
        }
        factor.pb(g);
        for (ll i = 0; i < factor.size(); i++)
        {
            cout << factor[i];
            if (i != factor.size() - 1)
            {
                cout << " x ";
            }
        }
        cout << endl;
        factor.clear();
    }
    return 0;
}*/
/* Solution 2 */
/*void calc(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            cout << i;
            if (n > 1)
                cout << " x ";
        }
    }
    if (n > 1)
        cout << n;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    ll g;
    while (cin >> g && g)
    {
        cout << g << " = ";
        if (g < 0)
        {
            cout << "-1 x ";
            g *= -1;
        }
        calc(g);
        cout << endl;
    }
    return 0;
}*/
/* Solution 3 */
/*bitset<mx> isPrime;
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
    FastSieve(mx);
    ll g;
    while (cin >> g && g)
    {
        if (g < 0)
        {
            cout << "-1 x ";
            g *= -1;
        }
        int size = primeFactor(g).size();
        for (auto it = primeFactor(g).begin(); it != primeFactor(g).end(); it++)
        {
            while (it->second > 1)
            {
                cout << it->first << " x ";
                it->second--;
            }
            cout << it->first ;
            /*while(--size){
                cout<<" x ";
            }
        }
        cout << endl;
        primeFactor(g).clear();
    }
}*/
/* Solution 4 */
vector<ll> primeFactor(ll n)
{
    vector<ll> primeFact;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            primeFact.pb(i);
            n /= i;
        }
    }
    if (n > 1)
        primeFact.pb(n);
    return primeFact;
}
int main()
{
    ll n;
    while (cin >> n && n)
    {
        ll temp;
        if (n < 0)
        {
            temp = n * (-1);
        }
        else
        {
            temp = n;
        }
        vector<ll> primeFact = primeFactor(temp);
        if (n < 0)
        {
            cout << n << " = -1";
            for (auto i : primeFact)
            {
                cout << " x " << i;
            }
        }
        else
        {
            cout << n << " = " << primeFact[0];
            for (int i = 1; i < primeFact.size(); i++)
            {
                cout << " x " << primeFact[i];
            }
        }
        cout<<endl;
    }
    return 0;
}