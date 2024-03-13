/*#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")*/
/***
**     Author: Rois Uddin Khan Emon
**     Bangladesh University of Business and Technology
**     Dept. of CSE.
***    Features:Debugging Features had been added.
***    version: 0.1
***/

/*#include <stdio.h>
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
}*/
/*long long prefixSum, val, t, n, cont;
vector<ll> ans;
vector<ll> a;
ll backtrack(int i)
{
    if (ans.size() == 3)
    {
        for (int i = 0; i < 3; i++)
        {
            // cout << ans[i] << " ";
            prefixSum += ans[i];
        }
        if ((prefixSum % 10) == 3)
        {
            // cout << "YES" << endl;
            // break;
            cont++;
        }
        prefixSum = 0;
        return cont;
    }
    for (int j = i; j < n; j++)
    {
        ans.push_back(a[j]);
        backtrack(j + 1);
        ans.pop_back();
    }
    return cont;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    cin >> t;
    while (t--)
    {
        prefixSum = 0, cont = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            a.push_back(val);
        }
        if (backtrack(0) > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        a.clear();
    }
    return 0;
}*/
/*int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    int t, n, x, cont;
    ll val;
    map<int, int> mp;
    cin >> t;
    while (t--)
    {
        cont = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            x = val % 10;
            mp[x]++;
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                for (int k = 0; k < 10; k++)
                {
                    int a = -1, b = -1, c = -1, sum = 0;
                    if (mp[i] != 0)
                    {
                        a = 1;
                        mp[i]--;
                    }
                    if (mp[j] != 0)
                    {
                        b = 1;
                        mp[j]--;
                    }
                    if (mp[k] != 0)
                    {
                        c = 1;
                        mp[k]--;
                    }
                    if (a == 1 && b == 1 && c == 1)
                    {
                        sum = i+j+k;
                        if (sum % 10 == 3)
                        {
                            cont++;
                        }
                    }
                    if (a == 1)
                    {
                        mp[i]++;
                    }
                    if (b == 1)
                    {
                        mp[j]++;
                    }
                    if (c == 1)
                    {
                        mp[k]++;
                    }
                }
            }
        }
        mp.clear();
        if (cont > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }*/
        /*ID-01 Start
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                for (int k = 0; k < 10; k++)
                {
                    int a = -1, b = -1, c = -1, sum = 0;
                    if (mp[i] != 0)
                    {
                        a = 1;
                        mp[i]--;
                        if (mp[j] != 0)
                        {
                            b = 1;
                            mp[j]--;
                            if (mp[k] != 0)
                            {
                                c = 1;
                                mp[k]--;
                                sum = i + j + k;
                            }
                        }
                    }
                    cout << "Test SUM "
                         << "i " << i << " j " << j << " k " << k << " " << sum << endl; ID-01 End*/
        /**if (mp[j] != 0)
        {
            b = 1;
            sum += j;
            mp[j]--;
        }
        if (mp[k] != 0)
        {
            c = 1;
            sum += k;
            mp[k]--;
        }*/
        /*ID-01 Start if (sum % 10 == 3)
         {
             cont++;
         }
         if (a == 1)
         {
             mp[k]++;
         }
         if (b == 1)
         {
             mp[j]++;
         }
         if (c == 1)
         {
             mp[i]++;
         }
         for (auto it = mp.begin(); it != mp.end(); it++)
         {
             cout << it->first << " " << it->second << endl;
         }
     }
 }
 }
 mp.clear();
 if (cont > 0)
 {
     cout << "YES" << endl;
 }
 else
 {
     cout << "NO" << endl;
 }
 } ID-01 End*/
    /*}
    return 0;
}*/
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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    int t, n, x, cont;
    ll val;
    map<int, int> mp;
    cin >> t;
    while (t--)
    {
        cont = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            x = val % 10;
            mp[x]++;
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                for (int k = 0; k < 10; k++)
                {
                    int a = -1, b = -1, c = -1, sum = 0;
                    if (mp[i] != 0)
                    {
                        a = 1;
                        mp[i]--;
                    }
                    if (mp[j] != 0)
                    {
                        b = 1;
                        mp[j]--;
                    }
                    if (mp[k] != 0)
                    {
                        c = 1;
                        mp[k]--;
                    }
                    if (a == 1 && b == 1 && c == 1)
                    {
                        sum = i+j+k;
                        if (sum % 10 == 3)
                        {
                            cont++;
                        }
                    }
                    if (a == 1)
                    {
                        mp[i]++;
                    }
                    if (b == 1)
                    {
                        mp[j]++;
                    }
                    if (c == 1)
                    {
                        mp[k]++;
                    }
                }
            }
        }
        mp.clear();
        if (cont > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}