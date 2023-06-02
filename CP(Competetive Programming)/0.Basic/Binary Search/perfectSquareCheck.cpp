#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(ll mid)
{
    return mid * mid;
}
ll calculation(ll n)
{
    ll low = 0, high = n, ans;
    ll mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (f(mid) > n)
        {
            high = mid;
        }
        else
        {
            ans = mid;
            low = mid + 1;
        }
        cerr << "Low " << low << " "
             << "High " << high << " Ans " << ans << endl;
    }
    return ans;
}
ll perfectSqrt(ll sqrt)
{
    return sqrt * sqrt;
}
double multiply(double mid)
{
    return mid * mid * mid;
}
double calculationForCubeRoot(double n)
{
    double low, high, mid, ans;
    double eps = 1e-6;
    if (n >= 0)
    {
        low = 0, high = max(1.0, n);
    }
    else
    {
        low = min(-1.0, n), high = 0;
    }
    while ((high - low) > eps)
    {
        mid = (low + high) / 2;
        if (multiply(mid) > n)
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
        ans = mid;
        cerr << "Low " << low << " High " << high << " Ans " << ans << endl;
    }
    return ans;
}
int main()
{
    ll n;
    cin >> n;
    ll sqrt = calculation(n);
    if (perfectSqrt(sqrt) == n)
    {
        cout << "Yes"
             << "\n";
    }
    else
    {
        cout << "No"
             << "\n";
    }
    double c;
    cin >> c;
    double cubeRoot = calculationForCubeRoot(c);
    cout << cubeRoot << endl;
    return 0;
}