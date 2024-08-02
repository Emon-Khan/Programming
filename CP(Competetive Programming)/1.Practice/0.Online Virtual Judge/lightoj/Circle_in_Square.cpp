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
#include <iomanip>
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
//#define PI 3.141592653589793238462
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// const double PI = acos(-1.0);
const double PI = 2 * acos(0.0);
const ll maxn = 1e5 + 7;
int main()
{
    fastio();
    int t;
    unsigned long long len;
    long double dbl;
    float r;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> r;
        float ans = pow((r * 2), 2) - (PI * pow(r, 2));
        // cout << ans + pow(10, -9) << endl;
        len = log10(ans) + 1;
        //cout << "len " << len << endl;
        dbl = (long double)(ans);
        //cout << "dbl " << dbl << endl;
        double multiplier = 1;
        /*while (len--)
        {
            dbl /= 10.0;
            cout<<"dbl "<<dbl<<endl;
        }*/
        while (len--)
        {
            multiplier *= 10.;
        }
        //cout << "multiplier " << multiplier << endl;
        dbl /= multiplier;
        //cout << "dbl " << dbl << endl;
        dbl += 1e-9;
        dbl *= multiplier;
        printf("Case %d: %.2Lf\n", i, dbl);
    }
    return 0;
}
/*#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    unsigned long long dec, len;
    long double dbl;

    while (cin >> dec)
    {
        len = log10(dec) + 1;
        cout << "len " << len << endl;
        dbl = (long double)(dec);
        cout << "dbl " << dbl << endl;
        double multiplier = 1;
         while (len--)
        {
            dbl /= 10.0;
            cout<<"dbl "<<dbl<<endl;
        }
        while (len--)
        {
            multiplier *= 10.;
        }
        cout << "multiplier " << multiplier << endl;
        dbl /= multiplier;
        cout << "dbl " << dbl << endl;
        /*while (len--)
        {
            dbl /= 10.0;
            cout << len << " len & dbl " << dbl << endl;
        }*/

/*dbl += 1e-9;

printf("%llu in int = %.20Lf in long double. :)\n", dec, dbl);
}

return 0;
}*/