#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int val1, val2;
void findSolve(int aar[], int bar[], int n, int m, int x)
{
    int i = 0;
    int j = m - 1;
    int fDiff = INT_MAX;
    while (i < n && 0 <= j)
    {
        int sum = aar[i] + bar[j];
        int diff = abs(sum - x);
        if (diff < fDiff)
        {
            fDiff = diff;
            val1 = aar[i];
            val2 = bar[j];
        }
        if (sum < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << val1 << " " << val2 << endl;
}
int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    int aar[n + 3];
    int bar[m + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> aar[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> bar[j];
    }
    sort(aar, aar + n);
    sort(bar, bar + m);
    findSolve(aar, bar, n, m, x);
    return 0;
}