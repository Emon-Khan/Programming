#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0, num=0, counter=0;
    scanf("%d", &n);
    while(n-->0)
    {
        scanf("%d", &num);
        if(sum+num<0)
        {
            counter++;
        }
        else
        {
            sum+=num;
        }
    }
    printf("%d", counter);

    return 0;
}
