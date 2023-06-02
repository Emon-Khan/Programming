#include<iostream>
using namespace std;

int main()
{
    int n, h;
    int a, w;
    int count = 0;
    cin>> n;
    cin>>h;

    for(int i = 0; i<n; i++)
    {
        cin>>a;
        if(a>h)
        {
            w = 2;
        }
        else
        {
            w = 1;
        }
        count = count + w;
    }
    cout<<count<<endl;

    return 0;

}
