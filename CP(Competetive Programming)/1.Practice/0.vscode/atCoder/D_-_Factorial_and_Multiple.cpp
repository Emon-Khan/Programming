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
bool isPrime(ll x)
{
    ll root = sqrt((lld)x);
    if (x % 2 == 0)
    {
        return false;
    }
    else
    {
        for (ll i = 3; i <= root; i += 2)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
ll fact(ll x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}
int main()
{
    fastio();
    ll k, n, flag, ans = 1, x;
    cin >> k;
    // ll root = sqrt((lld)k);
    // cout << root << endl;
    // ll unchangedK = k;
    for (ll i = 2; (i * i) <= k; i++)
    {
        flag = 0;
        while (k % i == 0)
        {
            k /= i;
            // cout << "k " << k << endl;
            flag++;
        }
        n = 0;
        while (flag > 0)
        {
            n += i;
            cout << "n " << n << endl;
            x = n;
            // cout<<"x "<<x<<endl;
            while (x % i == 0)
            {
                x /= i;
                flag--;
            }
            cout << "flag " << flag << endl;
        }
        ans = max(ans, n);
    }
    ans = max(ans, k);
    cout << ans << endl;
    return 0;
}
/*if (!flag)
{
    cout << k << endl;
}
else if (flag > 0)
{*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k, p, a, n, x, ans = 1;
    cin >> k;
    for (p = 2; (p * p) <= k; p++)
    {
        //cout << "First loop" << endl;
        a = 0;
        //cout << "a first " << a << endl;
        while (k % p == 0)
        {
            //cout << "First->first loop" << endl;
            k /= p;
            //cout << "k first " << k << endl;
            a++;
            //cout << "a second " << a << endl;
        }
        n = 0;
        //cout << "n first " << n << endl;
        while (a > 0)
        {
            //cout << "First->second loop" << endl;
            n += p;
            //cout << "n second " << n << endl;
            x = n;
            //cout << "x first " << x << endl;
            while (x % p == 0)
            {
                //cout << "First->second->first loop" << endl;
                x /= p;
                //cout << "x second " << x << endl;
                a--;
                //cout << "a third " << a << endl;
            }
        }
        ans = max(ans, n);
        //cout << "ans first " << ans << endl;
    }
    ans = max(ans, k);
    //cout << "ans second & final " << ans << endl;
    cout << ans << endl;
    return 0;
}*/