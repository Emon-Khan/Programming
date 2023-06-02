#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        int count=1;
        vector<int>v;
        cin>>n;
        if(n%10!=0)
        {
            v.push_back(n%10);
            n-=v[count-1];
            count++;
            if(n%100!=0)
            {
                v.push_back(n%100);
                n-=v[count-1];
                count++;
                if(n%1000!=0)
                {
                    v.push_back(n%1000);
                    n-=v[count-1];
                    count++;
                }
            }
        }
        else if(n%100!=0)
        {
            v.push_back(n%100);
            n-=v[count-1];
            count++;
            if(n%1000!=0)
            {
                v.push_back(n%1000);
                n-=v[count-1];
                count++;
            }
        }
        else if(n%1000!=0)
        {
            v.push_back(n%1000);
            n-=v[count-1];
            count++;
        }
        if(n==0)
        {
            cout<<count-1<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
        for(int i=0; i<count-1; i++)
        {
            cout<<v[i]<<" ";
        }
        if(n!=0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<endl;
        }
    }
    return 0;
}