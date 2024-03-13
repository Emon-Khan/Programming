#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
    ll t, a, b;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin >> a >> b;
        cout << (a ^ b) << endl;
    }
    return 0;
}