#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int saved[100005];
int vis[100005];
set<int> idx;
int _lis(int ar[], int n, int *max_ref)
{
    if (vis[n])
    {
        return saved[n];
    }
    else
    {
        if (n == 1)
        {
            vis[n] = 1;
            return saved[n] = 1;
        }

        int res, max_ending_here = 1;
        for (int i = 1; i < n; i++)
        {
            res = _lis(ar, i, max_ref);
            if (ar[i - 1] < ar[n - 1] && res + 1 > max_ending_here)
            {
                max_ending_here = res + 1;
                idx.insert(i - 1);
            }
        }
        if (*max_ref < max_ending_here)
        {
            *max_ref = max_ending_here;
            idx.insert(n - 1);
        }
        vis[n] = 1;
        return saved[n] = max_ending_here;
    }
}

int lis(int ar[], int n)
{
    int max = 1;
    _lis(ar, n, &max);
    return max;
}

int main()
{
    int ar[] = {10, 21, 9, 22, 33, 50, 41, 60};
    int n = sizeof(ar) / sizeof(ar[0]);
    cout << lis(ar, n) << endl;
    for (auto it : idx)
    {
        cout << it << "  ";
    }
    return 0;
}