#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    //int *ptr = lower_bound(ar, ar + n, 26);
    int *ptr = upper_bound(ar, ar + n, 25);
    cout << *ptr << endl;
    return 0;
}