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
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    int arr[] = {-1, 3, 4, 5, 2, 2, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp;
    vector<int> store;
    store.assign(size, 1);
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] >= arr[j])
            {
                temp = max(store[j] + 1, store[i]);
                store[i] = temp;
                // store.insert(store.begin() + i, temp);
            }
            cout << i << " " << j << " " << temp << endl;
        }
    }
    for (auto vec : store)
    {
        cout << vec << " ";
    }
    cout << endl;
    sort(store.begin(), store.end());
    for (auto vec : store)
    {
        cout << vec << " ";
    }
    cout << endl;
    vector<int>::iterator it = store.end()-1;
    cout << *it << endl;
    // cout << size << endl;
    return 0;
}*/
/*Code from gfg
url: https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/
*/

/*#include <iostream>
using namespace std;

int _lis(int arr[], int n, int *max_ref)
{
    if (n == 1)
        return 1;

    int res, max_ending_here = 1;
    for (int i = 1; i < n; i++)
    {
        cout << "Pre-index " << i << " res " << res << " max_ending_here " << max_ending_here << " *max_ref " << *max_ref << endl;
        res = _lis(arr, i, max_ref);
        cout << "Post-index " << i << " res " << res << " max_ending_here " << max_ending_here << " *max_ref " << *max_ref << endl;
        if (arr[i - 1] < arr[n - 1] && res + 1 > max_ending_here)
        {
            max_ending_here = res + 1;
        }
        cout << "After max_ending_here " << max_ending_here << endl;
    }
    if (*max_ref < max_ending_here)
        *max_ref = max_ending_here;
    return max_ending_here;
}

int lis(int arr[], int n)
{
    int max = 1;
    _lis(arr, n, &max);
    return max;
}

int main()
{
    // int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int arr[] = {3, 5, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of LIS is " << lis(arr, n);
    return 0;
}*/

/*I have tried this one*/
#include <iostream>
using namespace std;

int _lis(int arr[], int n, int *max_ref)
{
    if (n == 1)
        return 1;

    int res, max_ending_here = 1;
    for (int i = 1; i < n; i++)
    {
        cout << "Pre-index " << i << " res " << res << " max_ending_here " << max_ending_here << " *max_ref " << *max_ref << endl;
        res = _lis(arr, i, max_ref);
        cout << "Post-index " << i << " res " << res << " max_ending_here " << max_ending_here << " *max_ref " << *max_ref << endl;
        if (arr[i - 1] < arr[n - 1] && res + 1 > max_ending_here)
        {
            max_ending_here = res + 1;
        }
        cout << "After max_ending_here " << max_ending_here << endl;
    }
    if (*max_ref < max_ending_here)
        *max_ref = max_ending_here;
    cout << "Adress max_ref " << max_ref << endl;
    return max_ending_here;
}

int lis(int arr[], int n)
{
    int max = 1;
    //cout << "Max address " << &max << endl;
    _lis(arr, n, &max);
    cout << "Max address " << &max << endl;
    return max;
}

int main()
{
    // int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int arr[] = {3, 5, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of LIS is " << lis(arr, n);
    return 0;
}