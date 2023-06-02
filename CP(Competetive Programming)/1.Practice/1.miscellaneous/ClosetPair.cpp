#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int val1, val2;
void findSolve(int ar[], int n, int x)
{
    int i = 0, j = n - 1;
    int fdiff = INT_MAX;
    while (i < j)
    {
        int sum = ar[i] + ar[j];
        int diff = abs(x - sum);
        if (diff < fdiff)
        {
            fdiff = diff;
            val1 = ar[i];
            val2 = ar[j];
            j--;
        }
        if (sum > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << val1 << " " << val2 << endl;
}
int main()
{
    int n, x;
    cin >> n >> x;
    int ar[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    findSolve(ar, n, x);
    return 0;
}