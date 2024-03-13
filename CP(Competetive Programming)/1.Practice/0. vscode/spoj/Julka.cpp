#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
/***
**     Author: Rois Uddin Khan Emon
**     Bangladesh University of Business and Technology
**     Dept. of CSE.
***    Features:Debugging Features had been added.
***    version: 0.1
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
// Implementaion Using String
/*string s, d;
string k = "";
ll carry = 0;
bool zero = true;
ll sum = 0;
string findSum(ll i, ll j)
{
    while (i >= 0 && j >= 0)
    {
        debug(s[i]);
        debug(d[j]);
        sum = (s[i] - '0') + (d[j] - '0') + carry;
        debug(sum);
        if (sum)
        {
            zero = false;
        }
        k += (sum % 10 + '0');
        // cout<<k<<endl;
        debug(k);*/
/*for (int m = 0; m < k.size(); m++)
{
    cout << k[m];
}
cout<<endl;*/
/*carry = sum / 10;
i--;
j--;
}
while (i >= 0)
{
sum = (s[i] - '0') + carry;
if (sum)
{
    zero = false;
}
k += (sum % 10 + '0');
carry = sum / 10;
i--;
}
while (j >= 0)
{
sum = (d[j] - '0') + carry;
if (sum)
{
    zero = false;
}
k += (sum % 10 + '0');
carry = sum / 10;
j--;
}
if (zero)
{
k = '0';
}
while (carry)
{
k += (carry + '0');
carry /= 10;
}
while (k.back() == '0' && k.size() != 0)
{
k.pop_back();
}
reverse(k.begin(), k.end());
return k;
}*/
/*string divisibilityBy2(string ans)
{
    string quotient;
    string dividend;
    for (ll x = 0; x < ans.size(); x++)
    {
        /*if(ans[0]<2){
            quotient.push_back(0);
        }
        ans[x]%2
    }
}*/
/*int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    ll t = 10;
    cin >> s >> d;
    ll lenS = s.size();
    ll lenD = d.size();
    ll i = lenS - 1;
    ll j = lenD - 1;*/
// cout << s << endl;
// cout << d << endl;
/*string a, b;
a+b = s;
a-b = d;*/
/*debug(i);
debug(j);
string ans = findSum(i, j);
for (ll i = 0; i < ans.length(); i++)
{
    cout << ans[i];
}
cout << endl;
// divisibilityBy2(ans);
return 0;
}*/
string s, d;
vector<int> findSum(vector<int> sv, vector<int> dv)
{
    reverse(sv.begin(), sv.end());
    reverse(dv.begin(), dv.end());
    int len = min(sv.size(), dv.size());
    int su = 0, carry = 0;
    bool zero = true;
    vector<int> temp;
    for (int i = 0; i < len; i++)
    {
        su = sv[i] + dv[i] + carry;
        /*if (su)
        {
            zero = false;
        }*/
        carry = su / 10;
        temp.push_back(su % 10);
    }
    /*for (auto it : temp)
    {
        cout << "FirstCheck " << it << endl;
    }*/
    if (sv.size() > len)
    {
        for (int i = len; i < sv.size(); i++)
        {
            su = sv[i] + carry;
            /*if (su)
            {
                zero = false;
            }*/
            carry = su / 10;
            temp.push_back(su % 10);
        }
    }
    if (dv.size() > len)
    {
        for (int i = len; i < dv.size(); i++)
        {
            su = dv[i] + carry;
            /*if (su)
            {
                zero = false;
            }*/
            carry = su / 10;
            temp.push_back(su % 10);
        }
    }
    while (carry)
    {
        temp.push_back(carry % 10);
        carry /= 10;
    }
    while (temp.back() == 0 && temp.size())
    {
        temp.pop_back();
    }
    reverse(temp.begin(), temp.end());
    /*if (zero)
    {
        return 0;
    }*/
    return temp;
}
vector<int> divisibilityBy2(vector<int> sum)
{
    int rem = 0, frem;
    vector<int> temp;
    for (int i = 0; i < sum.size(); i++)
    {
        if (rem)
        {
            frem = rem * 10 + sum[i];
            rem = frem % 2;
            temp.push_back(frem / 2);
        }
        else
        {
            rem = sum[i] % 2;
            temp.push_back(sum[i] / 2);
        }
    }
    vector<int> resultDiv;
    int i = 0;
    while (temp[i] == 0)
        i++;
    for (; i < temp.size(); i++)
    {
        resultDiv.push_back(temp[i]);
    }
    /*while (temp.front() == 0 && temp.size() != 0)
    {
        temp.erase(temp.begin(), temp.begin()+i);
        i++;
    }*/
    return resultDiv;
}
vector<int> subtraction(vector<int> k, vector<int> sv)
{
    int lensv = sv.size();
    int lenk = k.size();
    // cout << "lensv " << lensv << " lenk " << lenk << endl;
    int startsv = lensv - 1;
    int startk = lenk - 1;
    int sbtrct, carry = 0;
    vector<int> temp;
    while (startsv >= 0 && startk >= 0)
    {
        if (sv[startsv] < k[startk])
        {
            sv[startsv] = 1 * 10 + sv[startsv];
            sbtrct = sv[startsv] - k[startk] - carry;
            temp.push_back(sbtrct);
            if (carry)
                carry--;
            carry++;
        }
        else if (sv[startsv] == k[startk])
        {
            if (carry)
            {
                sv[startsv] = 1 * 10 + (sv[startsv] - carry);
                sbtrct = sv[startsv] - k[startk];
                temp.push_back(sbtrct);
            }
            else
            {
                sbtrct = sv[startsv] - k[startk];
                temp.push_back(sbtrct);
            }
        }
        else
        {
            sbtrct = sv[startsv] - k[startk] - carry;
            temp.push_back(sbtrct);
            if (carry)
                carry--;
        }
        startsv--;
        startk--;
    }
    if (startsv >= 0)
    {
        sbtrct = sv[startsv] - carry;
        temp.push_back(sbtrct);
        if (carry)
            carry--;
        startsv--;
    }
    if (startk >= 0)
    {
        sbtrct = k[startk] - carry;
        temp.push_back(sbtrct);
        if (carry)
            carry--;
        startk--;
    }
    reverse(temp.begin(), temp.end());
    vector<int> resultSbtrct;
    int i = 0;
    while (temp[i] == 0)
        i++;
    for (; i < temp.size(); i++)
    {
        resultSbtrct.push_back(temp[i]);
    }
    return resultSbtrct;
    // return temp;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    ll t = 10;
    while (t--)
    {
        cin >> s >> d;
        vector<int> sv;
        vector<int> dv;
        for (int i = 0; i < s.size(); i++)
        {
            sv.push_back(s[i] - '0');
        }
        for (int i = 0; i < d.size(); i++)
        {
            dv.push_back(d[i] - '0');
        }
        vector<int> sum = findSum(sv, dv);
        /*for (auto it = sum.begin(); it != sum.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;*/
        vector<int> k = divisibilityBy2(sum);
        for (auto it : k)
        {
            cout << it;
        }
        cout << endl;
        vector<int> n = subtraction(k, sv);
        for (auto it : n)
        {
            cout << it;
        }
        cout << endl;
    }
    // cout << "[and 9 test cases more]" << endl;
    return 0;
}