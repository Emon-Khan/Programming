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
vector<vector<int>> subsets(vector<int> &nums)
{
    int n = nums.size();
    int subsetct = (1 << n);
    vector<vector<int>> subsets;
    for (int i = 0; i < subsetct; i++)
    {
        vector<int> subset;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                subset.push_back(nums[j]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}
int main()
{
    fastio();
    int n, val;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        vec.push_back(val);
    }
    auto Asubsets = subsets(vec);
    for (auto subset : Asubsets)
    {
        for (int ele : subset)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}