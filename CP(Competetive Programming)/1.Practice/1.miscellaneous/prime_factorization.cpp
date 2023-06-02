#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> prime_fact;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            prime_fact.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        prime_fact.push_back(n);
    }
    for (auto it : prime_fact)
    {
        cout << it << " ";
    }
    cout << endl;
    // number of divisor
    // sum of divisor
    map<int, int> mp;
    int sz = prime_fact.size();
    for (int i = 0; i < sz; i++)
    {
        mp[prime_fact[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    int no_divisor = 1, sum_divisor = 1;
    for (auto it : mp)
    {
        no_divisor *= it.second + 1;
        // sum_divisor *= ((int)(pow(it.first, (it.second + 1)) - 1) / (it.second - 1));
        sum_divisor *= (int)(pow(it.first, (it.second + 1)) - 1) / (it.first - 1);
    }
    cout << "no_of_divisor " << no_divisor << endl;
    cout << "sum_of_divisor " << sum_divisor << endl;
    return 0;
}