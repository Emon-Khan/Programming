#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b){
    while(b!=0){
        int rem;
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main()
{
    int Y, W;
    int N, DN=6;
    cin>>Y>>W;
    if(Y>W)
    {
        N=(DN-Y)+1;
    }
    else
    {
        N=(DN-W)+1;
    }

    cout<<N/GCD(N, DN)<<"/"<<DN/GCD(N, DN)<<endl;
    return 0;
}
