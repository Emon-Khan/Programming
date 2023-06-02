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

typedef long long ll;
typedef unsigned long long ull;
const double PI = acos(-1.0);

using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n + 5];
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    arr[0] = -1e15;
    arr[n + 1] = 1e15;
    for (ll i = 1; i <= n; i++)
    {
        cout << min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1])) << " ";
        cout << max(abs(arr[i] - arr[1]), abs(arr[i] - arr[n])) << endl;
    }
    return 0;
}