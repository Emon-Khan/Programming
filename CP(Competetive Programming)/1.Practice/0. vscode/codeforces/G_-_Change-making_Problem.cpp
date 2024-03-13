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
const ll maxn = 1e5 + 7;

ll rems, divi, cnt = 0;
ll recursion(vector<ll> &vec, ll i, int rems)
{
    if (rems == 0)
    {
        return cnt;
    }
    while (rems >= vec[i])
    {
        divi = rems / vec[i];
        rems = rems % vec[i];
        cnt = cnt + divi;
    }
    recursion(vec, i - 1, rems);
    return cnt;
}
int main()
{
    fastio();
    ll n, sum, val, idx = 0;
    cin >> n >> sum;
    vector<ll> vec;
    vec.push_back(1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> val;
        vec.push_back(val);
    }
    vector<ll> fvec;
    fvec.push_back(1);
    for (ll i = 1; i <= n; i++)
    {
        if (fvec[i - 1] * vec[i] > sum)
            break;
        fvec.insert(fvec.begin() + i, fvec[i - 1] * vec[i]);
        idx++;
    }
    rems = sum;
    ll ans = recursion(fvec, idx, rems);
    cout << ans << endl;
    return 0;
}
