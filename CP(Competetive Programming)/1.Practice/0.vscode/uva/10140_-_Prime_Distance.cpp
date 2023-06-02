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
typedef long long int lli;
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
bitset<1000000000> isPrime;
vector<ll> FastSieve(ll l, ll u)
{
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    vector<ll> p = {};
    for (ll i = 2; i * i <= u; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= u; j += i)
                isPrime[j] = 0;
        }
    }
    // primes.push_back(2);
    for (ll i = l; i <= u; i++)
        if (isPrime[i])
            p.push_back(i);
    return p;
}
/*vector<pair<ll, ll>> primeFactor(ll m)
{
    vector<pair<ll, ll>> factor;
    for (ll i = 0; i < (ll)primes.size() && primes[i] <= m; i++)
    {
        bool first = 1;
        while (m % primes[i] == 0)
        {
            if (first)
            {
                factor.push_back({primes[i], 0});
                first = 0;
            }
            factor.back().second++;
            m /= primes[i];
        }
    }
    return factor;
}
int main()
{
    FastSieve(1000);
    for (auto it = primeFactor(190).begin(); it != primeFactor(190).end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << primeFactor(190).size() << endl;
}*/
/*int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    ll l, u;
    while (cin >> l >> u)
    {
        //cout<<l<<" "<<u<<endl;
        vector<ll> primes = FastSieve(l, u);
        /*for(auto i: primes){
            cout<<i<<endl;
        }*/
/*map<int, pair<ll, ll>> mp;
int dif = 0;
if (primes.size() <= 1)
{
    cout << "There are no adjacent primes." << endl;
}
else
{
    for (ll i = primes.size() - 2; i >= 0; i--)
    {
        dif = primes[i + 1] - primes[i];
        debug(dif);
        debug(i);
        mp[dif] = {primes[i], primes[i + 1]};
    }
    /*for(auto i: primes){
        cout<<i<<endl;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second.first << " " << it->second.second << endl;
    }*/
/*auto it1 = mp.begin();
auto it2 = mp.end();
it2--;
cout << it1->second.first << "," << it1->second.second << " are closest, " << it2->second.first << "," << it2->second.second << " are most distant." << endl;
}
// it1.erase();
mp.clear();
primes.clear();
/*primes.pb(2);
for (auto i : primes)
{
cout << i << endl;
}
for (auto it = mp.begin(); it != mp.end(); it++)
{
cout << it->first << " " << it->second.first << " " << it->second.second << endl;
}*/
/*}
return 0;
}*/

/* ** uva 10140 , Prime Distance
** At first generate the prime numbers upto 10000000 by sieve ..  Then, the technique to find the primality of
a big num n is to divide the num by the prime numbers until less than or equal to sqrt(n) :)
Nur Shuvo,ICE,Nstu
gmail: nurshuvo51@gmail.com*/
//#include <bits/stdc++.h>
/* ** uva 10140 , Prime Distance
** At first generate the prime numbers upto 10000000 by sieve ..  Then, the technique to find the primality of
a big num n is to divide the num by the prime numbers until less than or equal to sqrt(n) :)
Nur Shuvo,ICE,Nstu
gmail: nurshuvo51@gmail.com
#include <iostream>
#include <stdio.h>
#include <math.h>
#define Max 10000000
char prime[Max + 1];
long long int array1[1000000], p;
using namespace std;
void sieve()
{
    long long int i, j, x;
    for (i = 0; i <= Max; i++)
        prime[i] = 0;
    prime[0] = prime[1] = 1;
    for (i = 4; i <= Max; i += 2)
        prime[i] = 1;

    x = sqrt(Max);
    for (i = 3; i <= x; i += 2)
    {
        for (j = i * i; j <= Max; j += i)
            prime[j] = 1;
    }
}
/*task-2: Check primality of a big  number greater than Max
long long int is_prime(long long int n)
{
    long long int i, x, check = 0;
    x = sqrt(n);
    for (i = 0; i < p, array1[i] <= x; i++)
    {
        if (n % array1[i] == 0)
        {
            check = 1;
            break;
        }
    }
    return check;
}
/*task-2 ends
int main()
{
    sieve();
    long long int a, b, i, j, m, array[100000], rslt1, rslt2, rslt3, rslt4, min, max, count;
    /*task 1: putting the prime numbers from 2 to 10000000 in array1
    p = 0;
    for (i = 2; i <= Max; i++)
    {
        if (prime[i] == 0)
        {
            array1[p++] = i;
        }
    }
    cout<<"p "<<p<<endl;
    /*task-1 ends
    while (scanf("%lld %lld", &a, &b) == 2)
    {
        if (a <= Max && b <= Max)
        {
            count = 0;
            m = 0;
            for (i = a; i <= b; i++)
            {
                if (prime[i] == 0)
                {
                    array[m++] = i;
                    count++;
                }
            }
            /*calculation
            min = 1000005;
            max = 0;
            for (i = 0; i < m - 1; i++)
            {
                if (array[i + 1] - array[i] < min)
                {
                    min = array[i + 1] - array[i];
                    rslt1 = array[i];
                    rslt2 = array[i + 1];
                }
                if (array[i + 1] - array[i] > max)
                {
                    max = array[i + 1] - array[i];
                    rslt3 = array[i];
                    rslt4 = array[i + 1];
                }
            }
            /*printing the final result
            if (count >= 2)
                printf("%lld,%lld are closest, %lld,%lld are most distant.\n", rslt1, rslt2, rslt3, rslt4);
            else
                printf("There are no adjacent primes.\n");
        }
        else
        {
            m = 0;
            count = 0;
            for (i = a; i <= b; i++)
            {
                if (is_prime(i) == 0)
                {
                    array[m++] = i;
                    count++;
                }
            }
            /* task-3: Calculation part
            min = 1000005;
            max = 0;
            for (i = 0; i < m - 1; i++)
            {
                if (array[i + 1] - array[i] < min)
                {
                    min = array[i + 1] - array[i];
                    rslt1 = array[i];
                    rslt2 = array[i + 1];
                }
                if (array[i + 1] - array[i] > max)
                {
                    max = array[i + 1] - array[i];
                    rslt3 = array[i];
                    rslt4 = array[i + 1];
                }
            }
            /*task-3 ends
            /*printing the final result
            if (count >= 2)
                printf("%lld,%lld are closest, %lld,%lld are most distant.\n", rslt1, rslt2, rslt3, rslt4);
            else
                printf("There are no adjacent primes.\n");
        }
    }
    return 0;
}*/
/*thank you */
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
#define Max 10000000
char prime[Max + 1];
long long int array1[1000000], p;
void sieve()
{
    long long int i, j, x;
    for (i = 0; i <= Max; i++)
    {
        prime[i] = 0;
    }
    prime[0] = prime[1] = 1;
    for (i = 4; i <= Max; i += 2)
    {
        prime[i] = 1;
    }
    x = sqrt(Max);
    for (i = 3; i <= x; i += 2)
    {
        for (j = i * i; j <= Max; j += i)
        {
            prime[j] = 1;
        }
    }
}
long long int is_prime(long long int n)
{
    long long int i, x, check = 0;
    x = sqrt(n);
    for (i = 0; i < p, array1[i] <= x; i++)
    {
        if (n % array1[i] == 0)
        {
            check = 1;
            break;
        }
    }
    return check;
}
int main()
{
    sieve();
    long long int i, j, a, b, count, m, array[100000], min, max, res1, res2, res3, res4;
    p = 0;
    for (i = 2; i <= Max; i++)
    {
        if (prime[i] == 0)
        {
            array1[p++] = i;
        }
    }
    // cout << "P " << p << endl;
    /*for (i = 0; i < p; i++)
    {
        cout << array1[i] << endl;
    }*/
    while (scanf("%lld %lld", &a, &b) == 2)
    {
        if (a <= Max && b <= Max)
        {
            count = 0;
            m = 0;
            for (i = a; i <= b; i++)
            {
                if (prime[i] == 0)
                {
                    array[m++] = i;
                    count++;
                }
            }
            min = 1000005;
            max = 0;
            for (i = 0; i < m - 1; i++)
            {
                if ((array[i + 1] - array[i]) < min)
                {
                    res1 = array[i];
                    res2 = array[i + 1];
                    min = res2 - res1;
                }
                if ((array[i + 1] - array[i]) > max)
                {
                    res3 = array[i];
                    res4 = array[i + 1];
                    max = res4 - res3;
                }
            }
            if (count >= 2)
            {
                cout << res1 << "," << res2 << " are closest, " << res3 << "," << res4 << " are most distant."<<endl;
            }
            else
            {
                cout << "There are no adjacent primes."<<endl;
            }
        }
        else
        {
            count = 0;
            m = 0;
            for (i = a; i <= b; i++)
            {
                if (is_prime(i) == 0)
                {
                    array[m++] = i;
                    count++;
                }
            }
            min = 1000005;
            max = 0;
            for (i = 0; i < m - 1; i++)
            {
                if ((array[i + 1] - array[i]) < min)
                {
                    res1 = array[i];
                    res2 = array[i + 1];
                    min = res2 - res1;
                }
                if ((array[i + 1] - array[i]) > max)
                {
                    res3 = array[i];
                    res4 = array[i + 1];
                    max = res4 - res3;
                }
            }
            if (count >= 2)
            {
                cout << res1 << "," << res2 << " are closest, " << res3 << "," << res4 << " are most distant."<<endl;
            }
            else
            {
                cout << "There are no adjacent primes."<<endl;
            }
        }
    }
    return 0;
}
