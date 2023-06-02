#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    for(int k = 1; k<=t; k++)
    {
        ll n, even = 0, not_palindrom=0;
        cin >> n;
        string s = to_string(n);
        int size = s.size();
        if (size % 2 == 0)
        {
            even++;
        }
        int sz = size / 2;
        if(even){
            for(int i = sz,j = sz-1;i<size && j>=0; i++, j--){
                if(s[i]!=s[j]){
                    not_palindrom++;
                    break;
                }
            }
        }else{
            for(int i = sz+1,j = sz-1;i<size && j>=0; i++, j--){
                if(s[i]!=s[j]){
                    not_palindrom++;
                    break;
                }
            }
        }
        if(not_palindrom){
            cout<<"Case "<<k<<": No"<<endl;
        }else{
            cout<<"Case "<<k<<": Yes"<<endl;
        }
        //cout << size << endl;
    }
    return 0;
}