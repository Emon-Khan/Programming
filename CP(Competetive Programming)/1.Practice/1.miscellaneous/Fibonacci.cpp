/* Top Down Approach
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX_N = 1000005;
ll saved[MAX_N];
ll vis[MAX_N];
ll fib(ll n)
{
    if (vis[n])
        return saved[n];
    vis[n] = 1;
    if (n < 2 && n >= 0)
        return saved[n] = n;
    return saved[n] = fib(n - 1) + fib(n - 2);
}
int main()
{
    ll n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << fib(n) << endl;
    }
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX_N = 1000005;
ll fib[MAX_N];
int main()
{
    ll n;
    while (cin >> n)
    {
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        cout << fib[n] << endl;
    }
    return 0;
}