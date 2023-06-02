#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, k, d;
    cin>>n>>t>>k>>d;
    double a = (double)n/k;
    int temp1 = ceil(a);
    int value1=t;
    int value2=t;
    for(int i=1; i<temp1; i++)
    {
        value1+=t;
    }
    double b=(double)k*d/t;
    int temp2 = ceil(b);
    int temp4;
    if(n>temp2)
    {
        double temp3 =(n-temp2)/(double)k;
        temp4 = ceil(temp3);
        int temp5 = temp4-(temp4/2);
        for(int i=1; i<temp5; i++)
        {
            value2+=t;
        }
    }
    if(value1>value2+d)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
