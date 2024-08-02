#include<bits/stdc++.h>
using namespace std;

int main()
{
    int G;
    string S;
    int size;
    while(cin>>G)
    {
        if(G==0)
        {
            break;
        }
        cin>>S;
        size = S.size();
        for(int i=1; i<=G; i++)
        {
            int count=0;
            for(int j=(size/G*i)-1; count<size/G; j--)
            {
                cout<<S[j];
                count++;
            }
        }
        cout<<endl;
        //cout<<endl;
    }
    return 0;
}
