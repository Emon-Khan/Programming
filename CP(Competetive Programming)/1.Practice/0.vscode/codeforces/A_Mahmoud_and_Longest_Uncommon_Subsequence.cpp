#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <stdio.h>
#include <math.h>

#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

#define pb pushback

#define filein freopen("input.txt", "r", stdin)
#define fileout freopen("output.txt", "w", stdout)

#define mod 1000000007

typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
const double PI = acos(-1.0);

using namespace std;

/*lli getHash(string key)
{
    lli value = 0;
    lli p = 31;
    lli p_power = 1;
    for (char ch : key)
    {
        value = (value + (ch - 'a' + 1) * p_power) % mod;
        p_power = (p * p_power) % mod;
    }
    return value;
}

int main()
{
    string a, b;
    cin >> a >> b;

    if (getHash(a) != getHash(b))
    {
        cout << max(a.size(), b.size()) << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}*/

int main()
{
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(a.size(), b.size());
    }
}