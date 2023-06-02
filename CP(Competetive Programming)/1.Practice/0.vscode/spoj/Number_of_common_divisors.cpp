#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        vector<int> vec;
        int sq = sqrt(a);
        for (int j = 2; j <= sq; ++j)
        {
            while (a % j == 0 && b % j == 0)
            {
                vec.push_back(j);
                x /= j;
                y /= j;
            }
        }
        map<int, int> mp;
        int sz = vec.size();
        for (int j = 0; j < sz; j++)
        {
            mp[vec[i]]++;
        }
        for (auto it : mp)
        {
            cout << it.first << " " << it.second << endl;
        }
        cout << endl;
    }
    return 0;
}