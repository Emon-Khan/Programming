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
bitset<100000000> isPrime;
vector<ll> prime(ll n)
{
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    vector<ll> p;
    for (ll i = 2; i * i <= n; i++)
    {
        for (ll j = i * i; j <= n; j += i)
        {
            isPrime[j] = 0;
        }
    }
    p.pb(2);
    for (ll i = 3; i <= n; i += 2)
    {
        if (isPrime[i])
            p.pb(i);
    }
    return p;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    ll n;
    while (cin >> n && n != -1)
    {
        vector<ll> pr = prime(n);
        vector<ll> npr;
        ll count = 0;
        for (int i = 2; i <= n; i++)
        {
            if (isPrime[i])
            {
                count++;
            }
            else
            {
                ll temp = i;
                for (int j = 0; j<pr.size() && temp % pr[j] == 0 ; j++)
                {
                    count++;
                    temp = temp / pr[j];
                }
            }
        }
        /*for (int i = 0; i < npr.size(); i++)
        {
            ll temp = npr[i];
            for (auto it = pr.begin(); it!= pr.end() && temp>1; it++)
            {
                while (temp % *it == 0)
                {
                    count++;
                    temp = temp / *it;
                }
            }
        }*/
        cout<<count<<endl;
        /*cout<<"Count"<<count<<endl;
        for(auto it: npr){
            cout<<it<<endl;
        }*/
    }
    return 0;
}