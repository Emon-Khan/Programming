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

/*int main()
{
#ifndef ONLINE_JUDGE
freopen("Error.txt", "w", stderr);
#endif
fastio();*/
/*int n, a;
cin >> n;
map<int, int> mp;
for (int i = 0; i < n; i++)
{
    cin >> a;
    mp[a]++;
}
int ans = 0, temp;
map<int, int>::iterator it;
for (it = mp.begin(); it != mp.end(); it++)
{
    temp = it->second;
    ans = max(ans, temp);
}
cout << ans << endl;*/
/*int n, ar[6000], cnt = 0, mx = -1;
map<long long, int> m;

cin >> n;
for (int i = 0; i < n; i++)
{
    cin >> ar[i];
    m[ar[i]]++;
}
sort(ar, ar + n);
for (int i = 0; i < n; i++)
{
    debug(ar[i]);
}
cnt = m[ar[n - 1]];
debug(cnt);
mx = cnt;
// cout<<cnt<<' '<<ar[n-1]<<endl;
for (int i = n - 2; i >= 0; i--)
{
    if (mx < m[ar[i]])
    {
        cnt += m[ar[i]] - mx;
        debug(cnt);
    }
    mx = max(mx, m[ar[i]]);
}
cout << cnt << "\n";
return 0;
}*/
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    int n, x;
    cin >> n;
    map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    while (!mp.empty())
    {
        for (auto i = mp.begin(); i != mp.end();)
        {
            i->second--;
            if (i->second == 0)
            {
                auto temp = i;
                i++;
                mp.erase(temp);
            }
            else
            {
                i++;
            }
            debug(mp);
        }
        ans++;
    }
    cout << ans << endl;
}