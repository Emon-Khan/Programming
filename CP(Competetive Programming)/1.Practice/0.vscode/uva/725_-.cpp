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
/*int N;
char nm[10], dnm[10];
void backtrack(int i)
{
    if (nm / dnm(int) == N)
    {
        cout << nm << " / " << dnm << " = " << N << endl;
    }
    for (int j = 1; j < 5; j++)
    {
        nm[i] = nm[j];
        cout << nm[i] << " " << nm[j] << endl;
        i++;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    cin >> N;
    for (int i = 0; i < 5; i++)
    {
        dnm.push_back(i);
    }
    for (int i = 5; i < 10; i++)
    {
        nm.push_back(i);
    }
    backtrack(0);
    return 0;
}*/
bool temp = true;
bool valCheck(int x, int y)
{
    map<int, int> data;
    // map<int, int>::iterator it;
    while (x != 0)
    {
        data[x % 10]++;
        x = x / 10;
    }
    while (y != 0)
    {
        data[y % 10]++;
        y = y / 10;
    }
    /*for (auto it1 = data.begin(); it1 != data.end(); it1++)
    {
        if (!temp)
        {
            break;
        }
        cout << it1->first << " " << it1->second << endl;
    }*/
    if (data.size() != 10)
    {
        return false;
    }
    for (auto it = data.begin(); it != data.end(); it++)
    {
        if (it->second != 1)
        {
            return false;
        }
    }
    // temp = false;
    return true;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    int n, abcde, fghij, flag = false, flagOne, flagTwo, hasAns;
    while (scanf("%d", &n))
    {
        if (!n)
        {
            break;
        }
        if (flag)
        {
            cout << endl;
        }
        hasAns = false;
        for (int fghij = 1234; fghij <= 98765; fghij++)
        {
            abcde = n * fghij;
            if (abcde > 98765)
                break;
            if (abcde < 10000)
            {
                flagOne = abcde * 10;
            }
            else
            {
                flagOne = abcde;
            }
            if (fghij < 10000)
            {
                flagTwo = fghij * 10;
            }
            else
            {
                flagTwo = fghij;
            }
            if (valCheck(flagOne, flagTwo))
            {
                if (abcde < 10000)
                {
                    cout << "0" << abcde << " / " << fghij << " = " << n << endl;
                }
                else if (fghij < 10000)
                {
                    cout << abcde << " / "
                         << "0" << fghij << " = " << n << endl;
                }
                else
                {
                    cout << abcde << " / " << fghij << " = " << n << endl;
                }
                hasAns = true;
            }
        }
        if (!hasAns)
        {
            cout << "There are no solutions for " << n << "." << endl;
        }
        flag = true;
    }
}