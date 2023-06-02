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
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    // vector<int> org1(nums1);
    // vector<int> org2(nums2);
    int sz1 = nums1.size();
    int sz2 = nums2.size();
    vector<int> nge(sz2);
    stack<int> st;
    for (int i = 0; i < sz2; i++)
    {
        while (!st.empty() && nums2[i] > nums2[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    vector<int> newvec;
    for (int i = 0; i < sz2; i++)
    {
        if (nge[i] > 0)
        {
            newvec.push_back(nums2[nge[i]]);
        }
        else
        {
            newvec.push_back(nge[i]);
        }
    }
    vector<int> index(sz1);
    for (int i = 0; i < sz1; i++)
    {
        for (int j = 0; j < sz2; j++)
        {
            if (nums1[i] == nums2[j])
            {
                index[i] = j;
            }
        }
    }
    vector<int> ans(sz1);
    for (int i = 0; i < sz1; i++)
    {
        ans[i] = newvec[index[i]];
    }
    return ans;
}
int main()
{
    fastio();
    int sz1, sz2;
    vector<int> nums1;
    vector<int> nums2;
    cin >> sz1 >> sz2;
    for (int i = 0; i < sz1; i++)
    {
        int val;
        cin >> val;
        nums1.push_back(val);
    }
    for (int i = 0; i < sz2; i++)
    {
        int val;
        cin >> val;
        nums2.push_back(val);
    }
    /*for (auto it : nums1)
    {
        cout << it << endl;
    }
    for (auto it : nums2)
    {
        cout << it << endl;
    }*/
    vector<int> nge = nextGreaterElement(nums1, nums2);
    for (auto it : nge)
    {
        cout << it << endl;
    }
    return 0;
}