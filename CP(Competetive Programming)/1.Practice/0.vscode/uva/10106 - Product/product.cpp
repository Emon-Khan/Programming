#include<bits/stdc++.h>
using namespace std;
vector<long long int> calculation(vector<long long int>p, vector<long long int>q)
{
    reverse(p.begin(), p.end());
    reverse(q.begin(), q.end());
    vector<long long int>multi;
    long long int carry = 0;
    for(long long int i=0; i<q.size(); i++)
    {
        for(long long int j=0; j<p.size(); j++)
        {
            long long int val = q[i]*p[j];
            multi.push_back(val);
        }
    }
    /*for(long long int i = 0; i<multi.size(); i++)
    {
        cout<<multi[i]<<" ";
    }*/
    vector<long long int>ans;
    carry = multi[0]/10;
    ans.push_back(multi[0]%10);
    for(long long int i = 1; i<multi.size(); i+2)
    {
        if(i+1<multi.size())
        {
            long long int val = multi[i]+multi[i+1]+carry;
            carry = val/10;
            ans.push_back(val%10);
        }
        else
        {
            long long int val = multi[i]+carry;
            carry = val/10;
            ans.push_back(val%10);
        }
    }
    while(carry!=0)
    {
        ans.push_back(carry%10);
        carry = carry/10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    //long long int x, y;
    string a, b;
    vector<long long int>x;
    vector<long long int>y;
    while(cin>>a)
    {
        cin>>b;
        for(long long int i = 0; i<a.size(); i++)
        {
            x.push_back(a[i]-'0');
        }
        for(long long int i = 0; i<b.size(); i++)
        {
            y.push_back(b[i]-'0');
        }
        vector<long long int>sum = calculation(x, y);
        for(long long int i =0; i<sum.size(); i++)
        {
            cout<<sum[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
