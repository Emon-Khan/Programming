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
    /*int n;
    cin >> n;
    vector<int> v[10];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            v[s[j] - '0'].push_back(j);
        }
    }
    int res = 1e9 + 10;
    for (int i = 0; i < 10; i++)
    {
        sort(v[i].begin(), v[i].end());
        int ans = v[i][0];
        for (int j = 1; j < v[i].size(); j++)
        {
            if (v[i][j] % 10 == v[i][j - 1] % 10)
            {
                v[i][j] = v[i][j - 1] + 10;
            }
            debug(v[i][j]);
            ans = max(ans, v[i][j]);
        }
        res = min(res, ans);
    }
    cout << res << endl;*/
    /*int n;
    string s[100];
    int cnt[10][10]={0};
    int ans, mx;
    /*for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            cnt[i][j] = 0;
    }*/
    /*cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cnt[(s[i][j] - '0')][j]++;
            debug(i);
            debug(cnt[(s[i][j] - '0')][j]);
        }
    }
    ans = 1000;
    for (int i = 0; i < 10; i++)
    {
        mx = 0;
        for (int j = 0; j < 10; j++)
        {
            mx = max(mx, 10 * (cnt[i][j] - 1) + j);
            debug(i);
            debug(mx);
        }
        ans = min(ans, mx);
    }
    cout << ans << endl;*/

    int n;
    string str[100];
    int cnt[10][10];
    cin >> n;
    int ans, mx;
    for (auto i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            cnt[i][j] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cnt[str[i][j] - '0'][j]++;
            //cout << "i " << i << "j " << j << cnt[str[i][j] - '0'][j] << endl;
        }
    }
    //cout << cnt[10][10] << endl;
    ans = 1e9 + 10;
    // cout << cnt[0][0];
    for (int i = 0; i < 10; i++)
    {
        mx = 0;
        for (int j = 0; j < 10; j++)
        {
            //debug(cnt[i][j]);
            mx = max(mx, (10 * (cnt[i][j] - 1) + j));
            //debug(10 * (cnt[i][j] - 1) + j);
            //debug(mx);
        }
        ans = min(ans, mx);
    }
    cout << ans << endl;
    return 0;
}