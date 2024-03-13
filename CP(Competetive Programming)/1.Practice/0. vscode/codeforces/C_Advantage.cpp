#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t, n, max, Smax, val;
    vector<ll> Sar;
    vector<ll> ar;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin >> n;
        for (ll j = 0; j < n; j++)
        {
            cin >> val;
            Sar.push_back(val);
            ar.push_back(val);
        }
        sort(Sar.begin(), Sar.end(), greater<ll>());
        /*for (ll j = 0; j < n; j++)
        {
            cout << "Sar " << Sar[j] << endl;
            cout << "ar " << ar[j] << endl;
        }*/
        max = Sar[0];
        Smax = Sar[1];
        for (ll j = 0; j < n; j++)
        {
            if (ar[j] == max)
            {
                cout << ar[j] - Smax << " ";
            }
            else
            {
                cout << ar[j] - max << " ";
            }
        }
        cout << endl;
        Sar.clear();
        ar.clear();
    }
    return 0;
}