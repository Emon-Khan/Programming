#include<bits/stdc++.h>
using namespace std;
bool isPrime(int N)
{
    if(N==1)
    {
        return false;
    }
    for(int i=2; i*i<=N; i++)
    {
        if(N%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int T, N;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        cin>>N;
        if(isPrime(N))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
