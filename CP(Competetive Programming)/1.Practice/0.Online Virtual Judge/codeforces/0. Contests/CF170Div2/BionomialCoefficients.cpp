#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
/***
**     Author: Rois Uddin Khan Emon
**     Bangladesh University of Business and Technology
**     Dept. of CSE.
***    version: 0.0
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

#define pb push_back
#define Sqr(n) (n * n)
#define Sort(v) sort(v.begin(), v.end())
#define Mxe(v) *max_element(v.begin(), v.end())
#define Mne(v) *min_element(v.begin(), v.end())
#define Fin freopen("input.txt","r", stdin)
#define Fout freopen("output.txt","w", stdout)

using namespace std;

typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
const double PI = acos(-1.0);
const lli maxn = 1e5+7;

template <typename T> T Abs(T a) { if (a < 0) return -a; else return a; }
template <typename T> T BigMod(T b, T p, T m) { if (p == 0) return 1; if (p % 2 == 0) { T s = BigMod(b, p / 2, m); return ((s % m) * (s % m)) % m; } return ((b % m) * (BigMod(b, p - 1, m) % m)) % m; }
template <typename T> T Pow(T B,T P){ if(P==0) return 1; if(P&1) return B*Pow(B,P-1);  else return Sqr(Pow(B,P/2));}
template <typename T> T gcd(T a,T b){if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template <typename T> T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}

char uplowch(char ch){if(ch >= 'A' &&  ch <= 'Z') ch += 32; return ch;}
char lowupch(char ch){if(ch >= 'a' &&  ch <= 'z') ch -= 32; return ch;}
string intostr(int x){stringstream ss; ss << x; string str = ss.str(); return str;}

#define MOD 1000000007
#define MAX -1000000007
#define MIN 1000000007

lli recursive_exponentiation_mod(lli x, lli y){
        if(y==0){
            return 1;
        }else if(y%2==0){
            lli temp = recursive_exponentiation_mod(x, y/2)%MOD;
            return temp*temp%MOD;
        }else{
            return x*recursive_exponentiation_mod(x,y-1)%MOD;
        }
    }
int main(){
    int t;
    cin>>t;
    vector<pair<lli,lli>> a(t);
    for(auto &x:a){
        cin>>x.first;
    }
    for(auto &x:a){
        cin>>x.second;
    }
    for(const auto &x:a){
        if(x.second==0 || x.second==x.first){
            cout<<1<<endl;
        }else{
            cout<<recursive_exponentiation_mod(2,x.second)<<endl;
        }
    }
    
    return 0;
}