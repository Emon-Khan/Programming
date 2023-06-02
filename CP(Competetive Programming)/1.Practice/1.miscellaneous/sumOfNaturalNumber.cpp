#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int sumOfNaturalNumber(int val)
{
    if (val <= 1)
    {
        return val;
    }
    return val + sumOfNaturalNumber(val - 1);
}
int main()
{
    int n=5;
    //cin >> n;
    cout << sumOfNaturalNumber(n) << endl;
    return 0;
}