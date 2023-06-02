// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin>>s;
//     int len = s.length();
//     multiset<pair<int,int>>msofpa;
//     for(int i = 0; i<len; i++)
//     {
//         msofpa.insert(make_pair(s[i], i+1));
//     }
//     auto prev = 1;
//     int count=0;
//     for(auto it:msofpa)
//     {
//         if(prev<=it.second)
//         {
//             // cout<<it.second<<endl;
//             prev= it.second;
//             count++;
//         }
//         //}
//     }
//     // for(auto it:msofpa)
//     // {
//     //     cout<<it.first<<" "<<it.second<<endl;
//     // }
//     cout<<(count-1)<<endl;
// }
#include <bits/stdc++.h>
#define sz(x) (int)x.size()
using namespace std;

int main()
{
    string s;
    cin >> s;
    /*int start = s.find(s[sz(s) - 1]);
    cout << start << endl;
    int cnt = 1;*/
    int cnt = 0, j;
    for (int i = (sz(s) - 1); i >= 0; i--)
    {
        cnt++;
        j = s.find(s[i]);
        if (i != j)
        {
            cnt++;
            i = j;
        }
        cout << " i " << i << endl;
    }
    // if (cnt == 2)
    // {
    //     cout << cnt - 1 << endl;
    // }
    // else
    // {
    cout << cnt << endl;
    //}
    return 0;
}
