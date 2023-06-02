#include <bits/stdc++.h>
#define M 1000000
using namespace std;
typedef long long ll;
bool marked[M];
void sieve(int n)
{
    marked[0] = marked[1] = 1;
    for (int i = 2 * 2; i <= n; i += 2)
    {
        marked[i] = 1;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (!marked[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                marked[j] = 1;
            }
        }
    }
}
int countDivisor(int n)
{
    int cntDivisor = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if ((i * i) == n)
        {
            cntDivisor += 1;
        }
        else if (n % i == 0)
        {
            cntDivisor += 2;
        }
    }
    return cntDivisor;
}
int sumDivisor(int n)
{
    int sumDivisor = 0;
    for (int i = 1; i * i <= n; i++)
    {
        int temp = n;
        if (n % i == 0)
        {
            temp /= i;
            if (i == temp)
            {
                sumDivisor += i;
            }
            else
            {
                sumDivisor += i + temp;
            }
        }
    }
    return sumDivisor;
}
int main()
{
    int n;
    cin >> n;
    sieve(n);
    vector<ll> p;
    for (int i = 0; i <= n; i++)
    {
        if (!marked[i])
            p.push_back(i);
    }
    int ans = countDivisor(n);
    cout << ans << endl;
    ans = sumDivisor(n);
    cout << ans << endl;
    return 0;
}