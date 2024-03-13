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
    ll n, t;
    cin >> n >> t;
    vector<pair<ll, char>> vr;
    for (int i = 0; i < n; i++)
    {
        ll val;
        char ch;
        cin >> ch >> val;
        vr.push_back(make_pair(val, ch));
    }
    sort(vr.begin(), vr.end());
    /*cout << endl;*/
    /*Dfor (auto it : vr)
    {
        cout << it.first << " SPACE " << it.second << endl;
    }*/
    ll countC = 0, countF = 0, countP = 0, countQ = 0, count = 0;
    for (auto it : vr)
    {
        // cout << it.first << " " << it.second << endl;
        if (it.second == 'C')
        {
            countC += it.first;
            // cout << "C " << countC << endl;
            if (countC <= t)
                count++;
        }
        else if (it.second == 'F')
        {
            countF += it.first;
            // cout << "F " << countF << endl;
            if (countF <= t)
                count++;
        }
        else if (it.second == 'P')
        {
            countP += it.first;
            // cout << "P " << countP << endl;
            if (countP <= t)
                count++;
        }
        else if (it.second == 'Q')
        {
            countQ += it.first;
            // cout << "Q " << countQ << endl;
            if (countQ <= t)
                count++;
        }
        // cout << count << endl;
    }
    cout << count << endl;

    return 0;
}