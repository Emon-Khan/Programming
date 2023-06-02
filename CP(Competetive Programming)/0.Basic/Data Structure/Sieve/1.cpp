/*------Bit slower approach-------*/
#include <bits/stdc++.h>
using namespace std;

bitset<50> isPrime;
vector<long long> primes;

void sieve(int N)
{
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i <= N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i + i; j <= N; j += i)
            {
                isPrime[j] = 0;
            }
            primes.push_back(i);
        }
    }
}
int main()
{
    sieve(50);
    cout << isPrime.count() << endl;
    for (auto it = primes.begin(); it != primes.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}

/*------Faster Approach------*/
/*#include <bits/stdc++.h>
using namespace std;
bitset<1000000> isPrime;
vector<long long> primes;
void sieve(long long N)
{
    isPrime.set();
    isPrime[0] = isPrime[1] = 0;
    for (int i = 3; i * i <= N; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= N; i += 2)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}
int main()
{
    sieve(100);
    for (auto it = primes.begin(); it != primes.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}*/