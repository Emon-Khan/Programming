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
    int t;
    cin >> t;
    cout << "t " << t << endl;
    for (int i = 1; i <= t; i++)
    {
        string a, b, newStr;
        int aint = 0, bint = 0, newStrint;
        cin >> a >> b;
        cout << "a " << a << endl;
        cout << "b " << b << endl;
        int size_a = a.size();
        int size_b = b.size();
        cout << "size_a " << size_a << endl;
        cout << "size_b " << size_b << endl;
        for (int i = size_b - 1, j = 0; i >= 0; i--, j++)
        {
            if (b[i] == '1')
            {
                // cout << "Y" << endl;
                bint += pow(2, j);
                cout << "bint " << bint << endl;
            }
            if (j == 8)
            {
                string to_string(int bint);
                newStr += bint;
                bint = 0;
                j = 0;
                cout << "newStr " << newStr << " bint" << bint << endl;
            }
        }
        newStr += bint;
        cout << "newStr " << newStr << endl;
        int size_n = newStr.size();
        if (size_n != size_a)
        {
            cout << "Case " << i << ": "
                 << "No" << endl;
        }
        else
        {
            aint = stoi(a);
            newStrint = stoi(newStr);
            if (aint == newStrint)
            {
                cout << "Case " << i << ": "
                     << "Yes" << endl;
            }
        }
    }
    return 0;
}