#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string a, b;
int ans = 0, sz = 7;
// int find_longest_common_prefix(int n, int m);
int find_longest_common_prefix(int n, int m)
{
    if (max(n, m) == (sz - 1))
        return 0;
    if (a[n] == b[m])
        return 1 + find_longest_common_prefix(n + 1, m + 1);
    return 0;
}
int main()
{
    cin >> a >> b;
    // sz = min(a.size(), b.size());
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            ans = max(ans, find_longest_common_prefix(i, j));
        }
    }
    cout << ans << endl;
    return 0;
}
