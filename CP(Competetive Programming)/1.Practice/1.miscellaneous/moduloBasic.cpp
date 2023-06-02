#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll modulo(ll a, ll m)
{
    ll mod = (a - (a / m) * m);
    if (mod >= 0)
    {
        return mod;
    }
    else
    {
        return (mod + m);
    }
}
ll moduloAddition(ll a, ll b, ll m)
{
    ll addition = modulo((modulo(a, m) + modulo(b, m)), m);
    return addition;
}
ll moduloSubtraction(ll a, ll b, ll m)
{
    ll subtraction = modulo((modulo(a, m) - modulo(b, m)), m);
    return subtraction;
}
ll moduloMultiplication(ll multiplicationAns, ll val, ll m)
{
    ll multiplication = modulo((modulo(multiplicationAns, m) * modulo(val, m)), m);
    return multiplication;
}
int main()
{
    ll a, b, m;
    cin >> a >> b >> m;
    ll val;
    // cout << modulo(a, m) << endl;
    cout << moduloAddition(a, b, m) << endl;
    cout << moduloSubtraction(a, b, m) << endl;
    ll multiplicationAns = 1;
    while (cin >> val)
    {
        if (val == 0)
        {
            break;
        }
        multiplicationAns = moduloMultiplication(multiplicationAns, val, m);
    }
    cout << multiplicationAns << endl;
    return 0;
}