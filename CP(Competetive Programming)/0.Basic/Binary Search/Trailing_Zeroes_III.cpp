#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll q, ans;
        cin >> q;
        ll mod = q % 6;
        ll quotient = q / 6;
        if (mod == 5)
        {
            ans = 0;
        }
        else
        {
            ans = (quotient * 25) + (mod * 5);
        }
        if(ans){
            cout << "Case " << i << ": "
                 << ans << endl;
        }else{
            cout << "Case " << i << ": "
                 << "impossible" << endl;
        }
    }
    return 0;
}