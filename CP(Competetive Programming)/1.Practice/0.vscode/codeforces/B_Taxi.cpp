/*#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
/***
**     Author: Rois Uddin Khan Emon
**     Bangladesh University of Business and Technology
**     Dept. of CSE.
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

#define pb push_back
#define Sqr(n) (n * n)
#define Sort(v) sort(v.begin(), v.end())
#define Mxe(v) *max_element(v.begin(), v.end())
#define Mne(v) *min_element(v.begin(), v.end())
#define Fin freopen("input.txt", "r", stdin)
#define Fout freopen("output.txt", "w", stdout)
#define unsync                    \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0)

using namespace std;

typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
const double PI = acos(-1.0);
const lli maxn = 1e5 + 7;

template <typename T>
T Abs(T a)
{
	if (a < 0)
		return -a;
	else
		return a;
}
template <typename T>
T BigMod(T b, T p, T m)
{
	if (p == 0)
		return 1;
	if (p % 2 == 0)
	{
		T s = BigMod(b, p / 2, m);
		return ((s % m) * (s % m)) % m;
	}
	return ((b % m) * (BigMod(b, p - 1, m) % m)) % m;
}
template <typename T>
T Pow(T B, T P)
{
	if (P == 0)
		return 1;
	if (P & 1)
		return B * Pow(B, P - 1);
	else
		return Sqr(Pow(B, P / 2));
}
template <typename T>
T gcd(T a, T b)
{
	if (a < 0)
		return gcd(-a, b);
	if (b < 0)
		return gcd(a, -b);
	return (b == 0) ? a : gcd(b, a % b);
}
template <typename T>
T lcm(T a, T b)
{
	if (a < 0)
		return lcm(-a, b);
	if (b < 0)
		return lcm(a, -b);
	return a * (b / gcd(a, b));
}

char uplowch(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	return ch;
}
char lowupch(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	return ch;
}
string intostr(int x)
{
	stringstream ss;
	ss << x;
	string str = ss.str();
	return str;
}

#define MOD 1000000007
#define MAX -1000000007
#define MIN 1000000007*/
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

int main()
//#define int int64_t
{
#ifndef ONLINE_JUDGE
	freopen("B_Taxi_Error.txt", "w", stderr);
#endif
	/*int n, a = 0, b = 0, c = 0, d = 0, x, ans = 0;
	cin >> n;
	while (n--)
	{
		cin >> x;
		if (x == 1)
			a++;
		if (x == 2)
			b++;
		if (x == 3)
			c++;
		if (x == 4)
			d++;
	}
	ans += d;
	d = 0; // 4's grouped immediately
	ans += min(a, c);
	if (a == min(a, c))
	{
		c -= a;
		a = 0;
	}
	else
	{
		a -= c;
		c = 0;
	} // pairs the 3's with 1's
	ans += b / 2;
	b %= 2; // pairs 2's in groups of 2
	// now: either a stray 2 exists or doesn't
	//  and each case has: i) either 1's in excess
	//  or ii) 2's in excess or iii) none left
	// 6 cases in total (2 x 3)
	// cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
	if (b)
	{
		if (c and !a)
		{
			ans += b + c;
			c = 0;
			b = 0;
			// cout <<" in here";
		}
		else if (a and !c)
		{
			if (a == 1 or a == 2)
			{
				ans++;
				a = 0;
				b = 0;
			}
			else if (a > 2)
			{
				b = 0;
				a -= 2;
				ans++;
				if (a < 4)
					ans++;
				else
					ans += a / 4 + a % 4;
				a = 0;
			}
		}
		else if (a + c == 0)
		{
			b = 0;
			ans++;
		}
		//	cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
	}
	else
	{
		if (c and !a)
		{
			ans += c;
			c = 0;
		}
		else if (a and !c)
		{
			if (a < 4)
				ans++;
			else
				ans += a / 4 + a % 4;
			a = 0;
		}
		else if (a + c == 0)
		{
			// do nothing
		}
	}

	cout << ans;

	// cerr << "Time taken : " << 1.0 * clock() / CLOCKS_PER_SEC << " seconds." << endl;*/
	/*int n;
	cin >> n;
	int a = 0, b = 0, c = 0, d = 0, x, count = 0;
	// int count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 1)
			a++;
		if (x == 2)
			b++;
		if (x == 3)
			c++;
		if (x == 4)
			d++;
	}
	count += d;
	debug(count);
	d = 0; /*d clear*/
	/*if (a != 0 && c != 0)
	{
		count += min(a, c);
		debug(count);
		if (a < c)
		{
			c -= a;
			a = 0;
		}
		else
		{
			a -= c;
			c = 0;
		}
	} /*a or c clear*/
	/*if (c != 0)
	{
		count += c;
		c = 0;
	}*/
	/*c clear*/
	/*if (b)
	{
		count += b / 2;
		b = b % 2;
	}*/
	/*calculation of b*/
	/*Caculation of remainning element a & b*/
	/*int left = a + (2 * b);
	if (left <= 4 && left < 0)
	{
		count += 1;
	}
	else if ((left % 4) != 0)
	{
		count += (left / 4) + 1;
	}
	else
	{
		count += (left / 4);
	}
	cout << count << endl;

	return 0;*/
	/*multiset<lld> data;
	multiset<lld>::iterator it, it2;
	lld n, count = 0, x, sum = 0;
	cin >> n;
	while (n--)
	{
		cin >> x;
		data.insert(x);
	}
	while (!data.empty())
	{
		sum = *--data.end();
		debug(sum);
		data.erase(--data.end());
		while (!data.empty())
		{
			it = data.upper_bound(4 - sum);
			debug(*it);
			it--;
			debug(*it);
			if (sum + *it <= 4)
			{
				sum += *it;
				for (it = data.begin(); it != data.end(); it++)
				{
					debug(*it);
				}
				data.erase(it);
			}
			else
			{
				break;
			}
		}
		count++;
	}
	cout << count << endl;*/
	int n;
	cin >> n;

	int arr[5];
	memset(arr, 0, sizeof arr);
	for (int i = 0; i < n; i++)
	{
		int in;
		cin >> in;
		arr[in]++;
	}

	int total = arr[4] + arr[3] + arr[2] / 2;
	debug(total);
	arr[1] -= arr[3];
	if (arr[2] % 2 == 1)
	{
		total += 1;
		arr[1] -= 2;
	}
	if (arr[1] > 0)
	{
		total += (arr[1] + 3) / 4;
	}

	cout << total << endl;

	return 0;
}