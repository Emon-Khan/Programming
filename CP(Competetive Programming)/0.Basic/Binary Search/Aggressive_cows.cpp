#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool countOfCows(vector<ll> vec, ll mid, int n, int c)
{
    ll Index = vec[0], cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (vec[i] - Index >= mid)
        {
            cnt++;
            Index = vec[i];
        }
        if (cnt == c)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<ll> vec;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            vec.push_back(val);
        }
        sort(vec.begin(), vec.end());
        // for (auto it : vec)
        // {
        //     cout << it << " ";
        // }
        ll low = vec[0], high = (vec[n - 1] - low), mid, ans;
        //cout << low << " " << high << endl;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (countOfCows(vec, mid, n, c))
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}