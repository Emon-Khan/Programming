#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ar[25];
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<pair<int, int>> a;
        vector<pair<int, int>> b;
        vector<pair<int, int>> c;
        vector<pair<int, int>> d;
        int val1, val2, val3, val4, val5, val6, area;
        cin >> val1 >> val2 >> val3 >> val4 >> val5 >> val6;
        a.push_back(make_pair(val1, val2));
        b.push_back(make_pair(val3, val4));
        c.push_back(make_pair(val5, val6));
        d.push_back(make_pair(val1, val6));
        area = abs(val1-val3)+abs(val2-val4);
    }

    return 0;
}