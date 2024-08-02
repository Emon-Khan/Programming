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
const lli maxn = 1e9;

using namespace std;

int main()
{
    lli n;
    cin >> n;
    lli a[n];
    lli flag = 0;
    for (lli i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    lli low = a[0];
    lli high = a[n - 1];
    /*for (lli i = 1; i < n - 1; i++)
    {
        if (a[0] < a[i] && a[n - 1] > a[i])
        {
            flag++;
        }
    }
    cout<<flag<<endl;*/
    for (lli i = 0; i < n; i++)
    {
        if (a[i] == low)
        {
            flag++;
        }
        else
        {
            break;
        }
    }
    for (lli i = n - 1; i > 0; i--)
    {
        if (a[i] == high)
        {
            flag++;
        }
        else
        {
            break;
        }
    }
    if (n - flag < 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << n - flag << endl;
    }
    return 0;
}