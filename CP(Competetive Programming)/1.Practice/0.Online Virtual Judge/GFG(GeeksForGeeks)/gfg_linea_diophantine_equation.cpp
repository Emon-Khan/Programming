// https://www.geeksforgeeks.org/linear-diophantine-equations/
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return abs(b);
    }
    else
    {
        return gcd(b, a % b);
    }
}
bool isPossible(int a, int b, int c)
{
    if (c % gcd(a, b) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (isPossible(a, b, c))
        {
            cout << "Have solution" << endl;
        }
        else
        {
            cout << "Have no solution" << endl;
        }
    }
    return 0;
}