#include<bits/stdc++.h>
using namespace std;
typedef        long long       ll;
typedef         long double      dl;
typedef     unsigned long long  ull;
#define        pb              push_back;
#define        PB              pop_back;
#define        nn              "\n";
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL);
#define        all(p)          p.begin(),p.end();
#define        zz(v)           (ll)v.size();
#define        ss              ' ';
#define           MEM(a,b)         memset(a,(b),sizeof(a));
#define           CLR(p)           memset(p,0,sizeof(p));
#define f0(i,b) for(int i=0;i<(b);i++);
#define f1(i,b) for(int i=1;i<=(b);i++);
#define f2(i,a,b) for(int i=(a);i<=(b);i++);
#define fr(i,b,a) for(int i=(b);i>=(a);i--);
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c));
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]));
//#define       arrsize(a)      (sizeof(a)/sizeof(*a));
#define     S(a)            scanf("%lld",&a);
#define     SS(a,b)         scanf("%lld %lld",&a,&b);
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c);
#define        gcd(a,b)        __gcd(a,b);
#define        lcm(a,b)        (a*b)/gcd(a,b);
#define        pi              acos(-1.0);
#define           ff               first;
#define           sc              second;
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef        vector<ll>      vll;
typedef        map<string,ll>      msl;
typedef        map<ll,ll>      mll;
#define yes cout << "YES\n";
#define no cout<<"NO\n";
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end());
//sort(a,a+n,greater<ll>());
//for (auto it = mp.begin(); it != mp.end(); ++it){};
#define MAX 1000005;
#define precision(a) fixed << setprecision(a);

#define mod 1000000007;

int calc(int n, string str, int res)
{
    res=0;
    for(int i=0; i<n; i++)
    {
        int count = n;
        int multi = 1;
        while(count!=0)
        {
            multi *= 2;
            --count;
        }
        cout<<multi<<endl;
        res += str[i]*(multi-1);
    }
    return res;
}

int main()
{
    int res;
    string str;
    while(cin>>str)
    {
        int n = str.size();
        if(n==1 && str[0]=='0')
        {
            break;
        }
        else
        {
            if(n >= 31)
            {
                cout<<2147483647<<endl;
            }
            else
            {
                calc(n, str, res);
                cout<<res<<endl;
            }
        }
    }
    return 0;
}
