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
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// const double PI = acos(-1.0);
const ll maxn = 1e5 + 7;
int main()
{
    fastio();
    ll t, xval, yval, flag;
    cin >> t;
    vector<ll> x;
    vector<ll> y;
    for (ll i = 0; i < t; i++)
    {
        flag = 0;
        for (ll j = 0; j < 3; j++)
        {
            cin >> xval >> yval;
            x.push_back(xval);
            y.push_back(yval);
        }
        for (auto xv : x)
        {
            cout << xv;
        }
        cout << '\n';
        for (auto yv : y)
        {
            cout << yv;
        }
        // cout << x[0] << endl;
        // cout <<
        for (int i = 0; i < 2; i++)
        {
            if ((x[i] ^ x[i + 1]) == 0)
            {
                flag++;
                cout << "YO " << i << endl;
            }
            if ((y[i] ^ y[i + 1]) == 0)
            {
                flag++;
                cout << "YY " << i << endl;
            }
        }
        /*if ((x[0] ^ x[1] || x[0] ^ x[2] || x[1] ^ x[2]) == 0)
        {
            flag++;
        }
        if ((y[0] ^ y[1] || y[0] ^ y[2] || y[1] ^ y[2]) == 0)
        {
            flag++;
        }*/
        cout << "flag" << flag << endl;
        if (flag == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        x.clear();
        y.clear();
    }
    /*for (auto xv : x)
    {
        cout << xv;
    }
    cout << '\n';
    for (auto yv : y)
    {
        cout << yv;
    }*/

    return 0;
}