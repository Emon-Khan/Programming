#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;
        int m = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] > m)
            {
                m = s[j];
            }
        }
        cout << (m - 96) << endl;
    }
}