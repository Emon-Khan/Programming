#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <stdio.h>
#include <math.h>

#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <iterator>
#include <map>
#include <set>
#include <algorithm>

#define pb pushback

#define filein freopen("input.txt", "r", stdin)
#define fileout freopen("output.txt", "w", stdout)
#define mod 1000000007

typedef long long ll;
typedef long long int lli;
typedef unsigned long long ull;
const double PI = acos(-1.0);
const lli maxn = 1e5+7;

using namespace std;
int main()
{
    lli n;
    cin >> n;
    lli snacksno[n+1];
    lli temp[n+1]={};
    lli flag;
    for (lli i = 1; i <= n; i++)
    {
        cin >> snacksno[i];
        //cout<<n;
    }
    flag = n;
    for(lli i = 1; i<=n; i++){
        cout<<"Temp"<<temp[i]<<" ";
    }
    for (lli i = 1; i <= n; i++)
    {
        /* code */
        temp[snacksno[i]] = 1;
        while (temp[flag]==1)
        {
            cout << "Flag" <<flag << " ";
            flag--;
        }
        cout << "\n";
    }

    /*for (lli i = 0; i < n; i++)
    {
        if (maxval == snacksno[i])
        {
            cout << maxval << " ";
            maxval = maxval - 1;
            if (!temp.empty())
            {
                sort(temp.begin(), temp.end(), greater<lli>());
                for (auto it = temp.begin(); it != temp.end(); it++)
                {
                    cout << *it << " ";
                    maxval = maxval - 1;
                }
                temp.clear();
                //cout << endl;
            }
            cout << endl;
        }
        else
        {
            cout << endl;
            temp.push_back(snacksno[i]);
        }
    }*/
}