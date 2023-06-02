#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void findSolve(int ar[], int n)
{
    int i = 0;
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        unordered_set<int> S;
        for (int j = i + 1; j < n; j++)
        {
            int x = -(ar[i] + ar[j]);
            if (S.find(x) != S.end())
            {
                cout << x << " " << ar[i] << " " << ar[j] << endl;
            }
            else
            {
                S.insert(ar[j]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    findSolve(ar, n);
    return 0;
}