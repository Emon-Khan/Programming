// Find A Triplet Such That Sum Of Them Equals To Third Element
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    int ar[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int l = 0;
        int r = n - 1;
        int sum = 0;
        int x = ar[i];
        while (l < r)
        {
            sum = ar[l] + ar[r];
            if (sum == x)
            {
                cout << ar[l] << " " << ar[r] << " " << sum << endl;
                flag++;
            }
            if (sum < x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    if (!flag)
    {
        cout << "No Such Triplet Found" << endl;
    }
    return 0;
}