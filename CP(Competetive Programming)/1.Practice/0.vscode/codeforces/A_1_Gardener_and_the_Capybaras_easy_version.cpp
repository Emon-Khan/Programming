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

int log(long long x)
{
    return 64 - __builtin_clzll(x) - 1;
}
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
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int sz = s.size();
        int index = 0;
        if (count(s.begin(), s.end(), 'a') == sz || count(s.begin(), s.end(), 'b') == sz)
        {
            cout << s[0] << " " << s.substr(1, sz - 2) << " " << s[sz - 1] << endl;
            continue;
        }
        else if (s[0] == 'a')
        {
            if (s[1] == 'b')
            {
                if (count(s.begin() + 1, s.end(), 'b') == sz - 1)
                {
                    cout << s[0] << " " << s.substr(1, sz - 2) << " " << s[sz - 1] << endl;
                    continue;
                }
                else
                {
                    for (int j = 1; j < sz; j++)
                    {
                        if (s[j] == 'a')
                        {
                            index = j;
                            break;
                        }
                    }
                    cout << s[0] << " " << s.substr(1, index - 1) << " " << s.substr(index, sz - 1) << endl;
                    continue;
                }
            }
            else if (s[1] == 'a')
            {
                cout << s[0] << " " << s[1] << " " << s.substr(2, sz - 1) << endl;
                continue;
            }
        }
        else if (s[0] == 'b')
        {
            // if (s[1] == 'a')
            // {
            /*if (count(s.begin() + 1, s.end(), 'a') == sz - 1)
            {*/
            // cout << s[0] << " " << s[1] << " " << s.substr(2, sz - 1) << endl;
            // continue;
            //}
            // else
            // {
            //     for (int j = 1; j < sz; j++)
            //     {
            //         if (s[j] == 'b')
            //         {
            //             index = j;
            //             break;
            //         }
            //     }
            //     cout << s[0] << " " << s.substr(1, index - 1) << " " << s.substr(index, sz - 1) << endl;
            //     continue;
            // }
            // }
            // else if (s[1] == 'b')
            // {
            cout << s[0] << " " << s[1] << " " << s.substr(2, sz - 1) << endl;
            continue;
            //}
        }
    }
    return 0;
}