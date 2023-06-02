#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s, r;
        cin >> n >> s >> r;
        vector<int> vec;
        int tmp1, tmp2, tmp3, tmp4;
        tmp1 = s - r;
        tmp4 = n - 1;
        tmp2 = r / tmp4;
        tmp3 = r % tmp4;
        vec.push_back(tmp1);
        if (tmp3)
        {
            if (tmp1 >= (tmp2 + tmp3))
            {
                vec.push_back(tmp2 + tmp3);
            }
            else
            {
                int tmp5 = ((tmp2 + tmp3) - tmp1);
                vec.push_back(tmp1);
                vec.push_back(tmp2 + tmp5);
                tmp4--;
            }
            tmp4--;
            while (tmp4--)
            {
                vec.push_back(tmp2);
            }
        }
        else
        {
            while (tmp4--)
            {
                vec.push_back(tmp2);
            }
        }
        for (auto it : vec)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}