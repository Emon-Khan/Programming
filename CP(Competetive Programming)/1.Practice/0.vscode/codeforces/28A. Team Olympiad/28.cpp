#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[4][50001];
    int t, count[4]= {0};
    int w;
    for(int i=1; i<=n; i++)
    {
        cin>>t;
        count[t]++;
        ar[t][count[t]]=i;
    }
    w=min(min(count[1], count[2]), count[3]);
    cout<<w<<endl;
    for(int i=1; i<=w; i++)
    {
        cout<<ar[1][i]<<" "<<ar[2][i]<<" "<<ar[3][i]<<endl;
    }
    return 0;

}
