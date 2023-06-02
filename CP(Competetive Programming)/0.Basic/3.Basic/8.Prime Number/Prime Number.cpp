#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, count=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count>0)
    {
        printf("This is not Prime Number.");
    }
    else
    {
        printf("This is Prime Number.");
    }

    return 0;
}
