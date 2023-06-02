/* Top Down Approach
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int saved[1005][1005];
string a, b;
int ans = 0;
int find_longest_common_suffix(int n, int m)
{
    // cout << n << " " << m << endl;
    if (saved[n][m] != -1)
        return saved[n][m];
    if (min(n, m) == 0)
        return saved[n][m] = 0;
    if (a[n - 1] == b[m - 1])
        return saved[n][m] = 1 + find_longest_common_suffix(n - 1, m - 1);
    return saved[n][m] = 0;
}
int main()
{
    memset(saved, -1, sizeof(saved));
    cin >> a >> b;
    for (int i = 1; i < a.size(); i++)
    {
        for (int j = 1; j < b.size(); j++)
        {
            ans = max(ans, find_longest_common_suffix(i, j));
        }
    }
    cout << ans << endl;
    return 0;
}*/

// Bottom Up Approach

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int saved[1005][1005];
string a, b;
int ans = 0;
void preCalc()
{
    /*for (int i = 0; i <= a.size(); i++)
        saved[i][0] = 0;
    for (int i = 0; i <= b.size(); i++)
        saved[0][i] = 0;*/
    for (int i = 1; i <= a.size(); i++)
    {
        for (int j = 1; j <= b.size(); j++)
        {
            if (a[i - 1] == b[j - 1])
                saved[i][j] = 1 + saved[i - 1][j - 1];
            else
                saved[i][j] = 0;
        }
    }
}
int main()
{
    cin >> a >> b;
    preCalc();
    for (int i = 1; i <= a.size(); i++)
    {
        for (int j = 1; j <= b.size(); j++)
        {
            ans = max(ans, saved[i][j]);
        }
    }
    cout << ans << endl;
    return 0;
}