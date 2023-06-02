#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int _lis(int ar[], int n, int *max_ref)
{
    if (n == 1)
        return 1;
    int res, max_ending_here = 1;
    for (int i = 1; i < n; i++)
    {
        res = _lis(ar, i, max_ref);
        if (ar[i - 1] < ar[n - 1] && res + 1 > max_ending_here)
            max_ending_here = res + 1;
    }
    if (*max_ref < max_ending_here)
    {
        *max_ref = max_ending_here;
    }
    return max_ending_here;
}
int lis(int ar[], int n)
{
    int max = 1;
    _lis(ar, n, &max);
    return max;
}
int main()
{
    int ar[] = {10, 21, 9, 22, 33, 50, 41, 5};
    int n = sizeof(ar) / sizeof(ar[0]);
    cout << lis(ar, n);
    return 0;
}