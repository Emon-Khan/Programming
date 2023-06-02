#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    char c;
    long long a[26] = {0};
    cin >> n >> k;
    for (long int i = 0; i < n; i++)
    {
        cin >> c;
        a[c - 'A']++;
    }
    sort(a, a + 26);
    long long sum = 0;
    for (int i = 25; k > 0 && i >= 0; i--)
    {
        if (a[i] >= k)
        {
            sum += (k * k);
            break;
        }
        sum += (a[i] * a[i]);
        k -= a[i];
    }
    cout << sum;
    return 0;
}