#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    cout << d << endl;
    x = x1;
    cout << " x " << x << endl;
    y = x1 - y1 * (a / b);
    cout << " y " << y << endl;
    return d;
}
int main()
{
    int xa, ya;
    int ans = gcd(4, 7, xa, ya);
    cout << ans << endl;
    cout << xa << ya << endl;
    return 0;
}