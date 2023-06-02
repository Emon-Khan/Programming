/*#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
/***
**     Author: Rois Uddin Khan Emon
**     Bangladesh University of Business and Technology
**     Dept. of CSE.
***    Features:Debugging Features had been added.
***    version: 0.1
***/

/*#include <stdio.h>
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
// const double PI = acos(-1.0);
const ll maxn = 1e5 + 7;

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
vector<ll> add(vector<ll> x, vector<ll> y)
{
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    ll len = min(x.size(), y.size());
    vector<ll> ans;
    ll carry = 0;
    for (int i = 0; i <= len - 1; i++)
    {
        ll val = x[i] + y[i] + carry;
        ans.push_back(val % 10);
        carry = val / 10;
    }
    if (x.size() > len)
    {
        for (int i = len; i <= x.size() - 1; i++)
        {
            ll val = x[i] + carry;
            ans.push_back(val % 10);
            carry = val / 10;
        }
    }
    if (y.size() > len)
    {
        for (int i = len; i <= y.size() - 1; i++)
        {
            ll val = y[i] + carry;
            ans.push_back(val % 10);
            carry = val / 10;
        }
    }
    while (carry)
    {
        ans.push_back(carry % 10);
        carry /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        vector<ll> s;
        vector<ll> d;
        for (int i = 0; i <= a.size() - 1; i++)
        {
            s.push_back(a[i] - '0');
        }
        for (int i = 0; i <= b.size() - 1; i++)
        {
            d.push_back(b[i] - '0');
        }
       /* for (int i = 0; i <= s.size() - 1; i++)
        {
            cout << s[i];
        }
        cout << endl;
        for (int i = 0; i <= d.size() - 1; i++)
        {
            cout << d[i];
        }*/
/*vector<ll> sum = add(s, d);
for (int i = 0; i <= sum.size() - 1; i++)
{
    cout << sum[i];
}
cout << endl;
}

return 0;
}*/
/*
Problem Name-Sum of two large numbers
Problem Link-https://practice.geeksforgeeks.org/problems/sum-of-numbers-or-number1219/1
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string findSum(string X, string Y)
    {
        // Your code goes here
        string ans = "";
        reverse(X.begin(), X.end());
        reverse(Y.begin(), Y.end());
        long long len = min(X.length(), Y.length());
        long long sum = 0;
        int carry = 0;
        bool zero = true;
        for (long long i = 0; i < len; i++)
        {
            sum = (X[i] - '0') + (Y[i] - '0') + carry;
            if (sum)
            {
                zero = false;
            }
            ans += ('0' + sum % 10);
            carry = sum / 10;
        }
        if (X.length() > len)
        {
            for (long long i = len; i < X.length(); i++)
            {
                sum = (X[i] - '0') + carry;
                if (sum)
                {
                    zero = false;
                }
                ans += ('0' + sum % 10);
                carry = sum / 10;
            }
        }
        if (Y.length() > len)
        {
            for (long long i = len; i < Y.length(); i++)
            {
                sum = (Y[i] - '0') + carry;
                if (sum)
                {
                    zero = false;
                }
                ans += ('0' + sum % 10);
                carry = sum / 10;
            }
        }
        if (carry)
        {
            ans += ('0' + carry);
        }
        if (zero)
        {
            return "0";
        }
        while (ans.size() && ans.back() == '0')
        {
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << endl;
    }
    return 0;
}