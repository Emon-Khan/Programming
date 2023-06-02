#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int tempn;
    vector<int> vecn;
    // vector<int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        cin >> tempn;
        vecn.push_back(tempn);
    }
    /*for(it = vecn.begin(); it!=vecn.end(); it++){
        cout<<*it<<endl;
    }*/
    while (m--)
    {
        int s, j, sum = 0;
        cin >> s >> j;
        // cout<<s<<j<<sum;
        if (s < j && (j - s) <= 1000)
        {
            for (int i = s; i < j; i++)
            {
                if ((vecn[i - 1] - vecn[i]) > 0)
                {
                    sum += vecn[i - 1] - vecn[i];
                }
            }
            cout << sum << endl;
        }
        else if (s > j && (s - j) <= 1000)
        {
            for (int i = s; i > j; i--)
            {
                if ((vecn[i - 1] - vecn[i - 2]) > 0)
                {
                    sum += vecn[i - 1] - vecn[i - 2];
                }
            }
            cout << sum << endl;
        }
        else if (s < j && (j - s) > 1000)
        {
            // double temp1 = ceil
            int temp = (j - s) / 2;
            // cout<<temp<<endl;
            // cout<<temp;
            int range = s + temp;
            for (int i = s, k = range; i < range, k < j; i++, k++)
            {
                if ((vecn[i - 1] - vecn[i]) > 0 && i < range)
                {
                    sum += vecn[i - 1] - vecn[i];
                    //cout << "i" << i << endl;
                }
                if ((vecn[k - 1] - vecn[k]) > 0)
                {
                    sum += vecn[k - 1] - vecn[k];
                    //cout << "k" << k << endl;
                }
            }
            cout << sum << endl;
        }
        else if (s > j && (s - j) > 1000)
        {
            // double temp1 = ceil
            int temp = (s - j) / 2;
            // cout<<temp<<endl;
            // cout<<temp;
            int range = s - temp;
            for (int i = s, k = range; i > range, k > j; i--, k--)
            {
                if ((vecn[i - 1] - vecn[i - 2]) > 0 && i > range)
                {
                    sum += vecn[i - 1] - vecn[i - 2];
                }
                if ((vecn[k - 1] - vecn[k - 2]) > 0)
                {
                    sum += vecn[k - 1] - vecn[k - 2];
                }
                //cout << "i" << i << endl;
                //cout << "k" << k << endl;
            }
            cout << sum << endl;
        }
    }
    return 0;
}