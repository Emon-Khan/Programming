#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll a[4] = {6, 28, 496, 8128};
void solve()
{
    ll n, temp;
    cin >> n;
    temp = -1;
    for (ll i = 0; i < 4; i++)
    {
        if (a[i] <= n)
        {
            temp = a[i];
        }
        else
        {
            break;
        }
    }
    cout << temp << endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}