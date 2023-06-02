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

void printBinary(int num)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main()
{
    fastio();
    /*EP 47

    cout << INT_MAX << endl;
    int a = (1ll << 31) - 1;
    cout << a << endl;
    unsigned int b = (1ll << 32) - 1;
    cout << b << endl;*/

    /*EP 48

    printBinary(9);
    int a = 7;
    int i = 1;
    if ((a & (1 << i)))
    {
        cout << "Set Bit\n";
    }
    else
    {
        cout << "Not Set Bit\n";
    }

    // set bit
    printBinary(a | (1 << 1));
    // unset bit
    printBinary(a & ~(1 << 3));
    // toggle
    printBinary(a ^ (1 << 2));
    printBinary(a ^ (1 << 3));

    // count set bit
    int ct = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (a & (1 << i))
        {
            ct++;
        }
    }
    cout << ct << endl;*/

    /*EP 49
     */
    // odd even check
    /*int a;
    cin >> a;
    if (a & 1)
    {
        cout << "Odd " << endl;
    }
    else
    {
        cout << "Even " << endl;
    }*/

    // Multiply/divide by 2
    /*int n = 5;
    cout << (n >> 1) << " " << (n << 1) << endl;*/

    // uppercase to lowercase vice-versa
    /*char A = 'A';
    char aC = A | (1 << 5);
    cout << aC << endl;
    cout << char(aC & (~(1 << 5))) << endl;
    cout << char('C' | ' ') << endl;
    cout << char('c' & '_') << endl;*/

    // clear LSB's
    /*printBinary(59);
    int x = 59;
    int i = 5;
    int y = x & (~((1 << 5) - 1));
    printBinary(y);
    cout << y << endl;*/

    // clear MSB's
    /*printBinary(95);
    int x = 95;
    int i = 4;
    int y = x & ((1 << 4) - 1);
    printBinary(y);*/

    // check power of 2
    /*int n = 32;
    if (n & (n - 1))
    {
        cout << "Not power of 2" << endl;
    }
    else
    {
        cout << "Power of 2" << endl;
    }*/
    /*EP 50*/
    // swap numbers
    /*int a = 4, b = 6;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout<<a<<" "<<b<<endl;*/

    // Find the odd count element
    /*int n, x, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans ^= x;
    }
    printBinary(ans);
    cout<<ans<<endl;*/
    // EP 51
    int t, num_workers, day;
    cin >> t;
    vector<int> masks(t, 0);
    for (int i = 0; i < t; i++)
    {
        cin >> num_workers;
        int mask = 0;
        for (int j = 0; j < num_workers; j++)
        {
            cin >> day;
            mask = (mask | (1 << day));
        }
        masks[i] = mask;
    }
    int max_common_days = 0;
    int person1 = -1;
    int person2 = -1;
    vector<pair<int, pair<int, int>>> vecPair;
    for (int i = 0; i < t; i++)
    {
        for (int j = i + 1; j < t; j++)
        {
            int common_days = __builtin_popcount(masks[i] & masks[j]);
            if (common_days >= max_common_days)
            {
                max_common_days = common_days;
                person1 = i;
                person2 = j;
                vecPair.push_back(make_pair(max_common_days, make_pair(person1, person2)));
            }
            // max_common_days = max(max_common_days, common_days);
        }
    }
    for (auto it : vecPair)
    {
        cout << it.second.first << " " << it.second.second << " " << it.first << endl;
    }
    // cout << person1 << " " << person2 << " " << max_common_days << endl;

    return 0;
}