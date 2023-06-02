#include <bits/stdc++.h>
typedef long long ll;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
/*const int MAX_N = 1000000;
const int LOG = 20;
ll ar[MAX_N];
ll m[MAX_N][LOG];*/
int log(long long x)
{
    return 64 - __builtin_clzll(x) - 1;
}
int main()
{
    fastio();
    int n, q;
    cin >> n >> q;
    int MAX_N = n + 3;
    int LOG = log((ll)n) + 1;
    // cout << "LOG " << LOG << endl;
    int ar[MAX_N];
    int m[LOG][MAX_N];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        m[0][i] = ar[i];
    }
    for (int i = 1; i < LOG; i++)
    {
        for (int j = 0; j + (1 << i) <= n; j++)
        {
            m[i][j] = gcd(m[i - 1][j], m[i - 1][j + (1 << i) - i]);
        }
    }
    /*for (int k = 0; k < LOG; k++)
    {
        for (int i = 0; i + (1 << k) <= n; i++)
        {
            cout << " m[" << k << "][" << i << "] " << m[k][i] << endl;
        }
        cout << endl;
    }*/
    // for (int i = 0; i <)
    for (int i = 0; i < q; i++)
    {
        int L, R;
        cin >> L >> R;
        int length = R - L + 1;
        // int k = 0;
        int k = log((ll)length);
        // while ((1 << (k + 1)) <= length)
        // {
        //     k++;
        // }
        // cout << "k " << k << endl;
        //cout << R - (1 << k) << endl;
        ll query = min(m[k][L - 1], m[k][R - (1 << k)]);
        cout << query << endl;
    }

    return 0;
}