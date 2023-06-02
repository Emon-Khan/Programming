#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int val1, val2;
bool findSum(int ar[], int x, int n)
{
    int i = 0;
    int j = n - 1;
    /*for (int i = 0; i < n; i++)
    {
        cout << ar[i] << endl;
    }*/
    while (i < j)
    {
        int sum = ar[i] + ar[j];
        if (sum == x)
        {
            val1 = ar[i];
            val2 = ar[j];
            return true;
        }
        if (x < sum)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
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
    if (findSum(ar, x, n))
    {
        cout << "Yes" << endl;
        cout << val1 << " " << val2 << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}