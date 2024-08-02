// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
// /***
// **     Author: Rois Uddin Khan Emon
// **     Bangladesh University of Business and Technology
// **     Dept. of CSE.
// ***    Features:Debugging Features has been removed because now i can use vs code's default debugger.
// ***    version: 0.2
// ***/

// #include <stdio.h>
// #include <iostream>
// #include <sstream>
// #include <string.h>
// #include <string>
// #include <cwctype>
// #include <math.h>
// #include <vector>
// #include <iterator>
// #include <map>
// #include <set>
// #include <stack>
// #include <algorithm>
// #include <bitset>
// #include <limits.h>

// int log(long long x)
// {
//     return 64 - __builtin_clzll(x) - 1;
// }
// #define fastio()                      \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)
// #define pb push_back
// #define ppb pop_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define set_bits __builtin_popcountll
// #define Sqr(n) (n * n)
// #define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()
// #define Sort(v) sort(v.begin(), v.end())
// #define Mxe(v) *max_element(v.begin(), v.end())
// #define Mne(v) *min_element(v.begin(), v.end())

// #define MOD 1000000007
// #define MOD1 998244353
// #define INF 1e18
// #define PI 3.141592653589793238462
// using namespace std;

// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double lld;
// // const double PI = acos(-1.0);
// const ll maxn = 1e5 + 7;
// bool cmp(pair<string, int> a, pair<string, int> b)
// {
//     /*if (a.second != b.second)
//     {
//         return a.second > b.second;
//     }
//     else
//     {*/
//     return a.first > b.first;
//     //}
// }
// int main()
// {
//     fastio();
//     int n, ans;
//     cin >> n;
//     vector<pair<int, int>> vp;
//     for (int i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         vp.push_back(make_pair(x, y));
//     }
//     int ymax = 0;
//     int ymin = 45000;
//     int xmax = 0;
//     int xmin = 45000;
//     sort(vp.begin(), vp.end());
//     /*for (auto it : vp)
//     {
//         cout << it.first << " " << it.second << endl;
//     }*/
//     int sz = vp.size();
//     int yflag = 0, xflag = 0;
//     for (int i = 0; i < sz; i++)
//     {
//         for (int j = i + 1; j < sz; j++)
//         {
//             if (vp[i].first == vp[j].first)
//             {
//                 ymax = max(ymax, (vp[j].second - vp[i].second));
//                 ymin = min(ymin, (vp[j].second - vp[i].second));
//                 yflag++;
//             }
//             else if (vp[i].second == vp[j].second)
//             {
//                 xmax = max(xmax, (vp[j].first - vp[i].first));
//                 xmin = min(xmin, (vp[j].first - vp[i].first));
//                 xflag++;
//             }
//             /*cout << ymax << " " << i << " ymax i j ymin " << j << " " << ymin << endl;
//             cout << xmax << " " << i << " xmax i j xmin " << j << " " << xmin << endl;*/
//         }
//     }
//     if (yflag >= 2 && xflag >= 2)
//     {
//         ans = (xmax * ymax) - (xmin * ymin);
//     }
//     else
//     {
//         ans = -1;
//     }
//     cout << ans << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<pair<int, int>> points_st;
    vector<pair<int, int>> points(n);
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].first >> points[i].second;
        points_st.insert(points[i]);
    }
    int ar_min = INT_MAX, ar_max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            auto p1 = points[i];
            auto p2 = points[j];
            if (p1.first == p2.first)
                continue;
            if (p1.second == p2.second)
                continue;
            if (p1.first > p2.first)
                swap(p1, p2);
            int x1 = p1.first, y1 = p2.second;
            int x2 = p1.second, y2 = p2.first;
            if (points_st.count({x1, y1}) && points_st.count({x2, y2}))
            {
                ar_max= max(ar_max, (P1.first-p2.first)*(p1.second-p2.second));
                ar_min= min(ar_min, (P1.first-p2.first)*(p1.second-p2.second));
            }
        }
    }
}
