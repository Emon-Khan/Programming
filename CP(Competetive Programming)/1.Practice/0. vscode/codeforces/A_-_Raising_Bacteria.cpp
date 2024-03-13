#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
/***
**     Author: Rois Uddin Khan Emon
**     Bangladesh University of Business and Technology
**     Dept. of CSE.
***    Features:Debugging Features has been removed because now i can use vs code's default debugger.
***    version: 0.2
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
int log(long long x)
{
    return 64 - __builtin_clzll(x) - 1;
}
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// const double PI = acos(-1.0);
const ll maxn = 1e5 + 7;
/*ll calc(ll x)
{
    ll pow = log(x);
    if (pow <= 1)
    {
        return 1;
    }
    else
    {
        // cout << pow << endl;
        ll temp = x - (1LL << pow);
        return calc(temp);
    }
}*/
int main()
{
    fastio();
    ll x, ans = 0, pow, temp;
    cin >> x;
    // pow = log(x);
    // cout << pow << endl;
    if ((x & (x - 1)) == 0)
    {
        ans += 1;
        // cout << ans << endl;
    }
    else
    {
        pow = log(x);
        temp = x - (1LL << pow);
        ans += 1;
        // cout << "1 pow " << pow << " temp " << temp << endl;
        while (pow >= 1 && temp != 0)
        {
            ans += 1;
            pow = log(temp);
            temp -= (1LL << pow);
            // cout << "2 pow " << pow << " temp " << temp << endl;
        }
        /*if (temp)
        {
            ans += 1;
        }*/
        /*calc(x);
        pow = log(x);
        // cout << pow << endl;
        ll temp = x - (1LL << pow);
        if (temp & 1)
        {
            ans += 1;
        }
        else
        {
            ans += 0;
        }
        ans += temp >> 1;*/
    }
    cout << ans << endl;
    return 0;
}