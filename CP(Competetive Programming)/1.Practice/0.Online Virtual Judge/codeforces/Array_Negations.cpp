#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            pq.push(x);
        }
        while (k--)
        {
            ll top = pq.top();
            pq.pop();
            pq.push(top * -1);
        }

        ll sum = 0LL;
        while (!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }

        cout << sum << endl;
    }
}