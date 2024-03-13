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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    int t, n, m, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> k;
        string a, b;
        string c = "";
        cin >> a;
        cin >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        debug(a);
        debug(b);
        int x = 0, y = 0, p = 0, q = 0;
        while (x < n && y < m)
        {
            if (((a[x] < b[y]) && p < k) || q == k)
            {
                q = 0;
                c += (a[x]);
                x++;
                p++;
                // debug(c);
            }
            else
            {
                p = 0;
                c += b[y];
                y++;
                q++;
                // debug(c);
            }
            // debug(c);
        }
        /*  sort(a.begin(), a.end());
            reverse(a.begin(), a.end());
            sort(b.begin(), b.end());
            reverse(b.begin(), b.end());
            debug(a);
            debug(b);
            int last;
            if (a.back() <= b.back())
            {
                last = 0;
                c.push_back(a.back());
                a.pop_back();
            }
            else
            {
                last = 1;
                c.push_back(b.back());
                b.pop_back();
            }
            int cons = 1;
            while (!a.empty() && !b.empty())
            {
                if (a.back() <= b.back())
                {
                    if (last == 0)
                    {
                        if (cons == k)
                        {
                            cons = 0;
                            last = 1;
                            c.push_back(b.back());
                            b.pop_back();
                            cons++;
                        }
                        else
                        {
                            last = 0;
                            c.push_back(a.back());
                            a.pop_back();
                            cons++;
                        }
                    }
                    else
                    {
                        cons = 0;
                        last = 0;
                        c.push_back(a.back());
                        a.pop_back();
                        cons++;
                    }
                }
                else
                {
                    if (last == 1)
                    {
                        if (cons == k)
                        {
                            cons = 0;
                            last = 0;
                            c.push_back(a.back());
                            a.pop_back();
                            cons++;
                        }
                        else
                        {
                            last = 1;
                            c.push_back(b.back());
                            b.pop_back();
                            cons++;
                        }
                    }
                    else
                    {
                        cons = 0;
                        last = 1;
                        c.push_back(b.back());
                        b.pop_back();
                        cons++;
                    }
                }
            }
            cout << c << endl;*/
        cout << c << endl;
    }
    return 0;
}