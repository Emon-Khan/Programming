// C++ program to implement recursive Binary Search
/*#include <bits/stdc++.h>
using namespace std;

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        cout << mid << endl;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}*/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
/***
**     Author: Rois Uddin Khan Emon
**     Bangladesh University of Business and Technology
**     Dept. of CSE.
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

#define pb pushback
#define Sqr(n) (n * n)
#define Sort(v) sort(v.begin(), v.end())
#define Mxe(v) *max_element(v.begin(), v.end())
#define Mne(v) *min_element(v.begin(), v.end())
#define Fin freopen("input.txt", "r", stdin)
#define Fout freopen("output.txt", "w", stdout)

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
#define MIN 1000000007
int BS(int a[], int s, int e, int key)
{
    if(e>=s){
        int mid = s+(e-s)/2;
        if(a[mid]==key){
            return mid;
        }
        if(a[mid]>key){
           return BS(a, s, mid-1, 14);
        }
        return BS(a, mid+1, e, 14);
    }
    return -1;

}
int main()
{
    int a[] = {1, 5, 7, 14, 17};
    int n = sizeof(a) / sizeof(a[0]);
    int result = BS(a, 0, n - 1, 14);
    if(result == -1){
        cout<<"Key not found"<<endl;
    }else{
        cout<<"Key has found and it's index is : "<< result<<endl;
    }
    return 0;
}
