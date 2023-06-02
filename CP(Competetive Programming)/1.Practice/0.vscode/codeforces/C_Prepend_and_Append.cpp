#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int tmp = n / 2;
        int cnt = 0, flag = 0;
        // cout << n << " " << s << " " << tmp << endl;
        if (n & 1)
        {
            cnt = 1;
            // cout << cnt << endl;
            for (int x = tmp + 1, y = tmp - 1; x < n && y >= 0; x++, y--)
            {
                // cout << x << " " << y << endl;
                if (!(s[x] ^ s[y]))
                {
                    cnt += 2;
                }
            }
            cout << cnt << endl;
        }
        else
        {
            cnt = 2;
            for (int x = tmp + 1, y = tmp - 2; x < n && y >= 0; x++, y--)
            {
                if (!(s[x] ^ s[y]) && flag)
                {
                    cnt = n;
                    break;
                }
                if (!(s[x] ^ s[y]))
                {
                    cnt += 2;
                }
                else
                {
                    flag++;
                }
            }
            if ((cnt == 2) && (s[tmp] ^ s[tmp - 1]))
            {
                // if (s[tmp] ^ s[tmp - 1])
                cout << 0 << endl;
            }
            else
            {
                cout << cnt << endl;
            }
        }
    }
    return 0;
}