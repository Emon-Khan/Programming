#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str[501];
    int T, N, count=0, i;
    cin>>T;
    while(T--)
    {
        cin>>N;
        for(i=0; i<=N; i++)
        {
            getline(cin, str[i]);
        }
        for(int i=0; i<=N; i++)
        {
            for(int j=0; j<=N; j++)
            {
                if(str[i][j]==' ')
                {
                    count++;
                }
                if(count > 1)
                {
                    for(std::string::iterator it=str.begin(); it!=str.end(); it++)
                    {
                        cout<<*it<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
