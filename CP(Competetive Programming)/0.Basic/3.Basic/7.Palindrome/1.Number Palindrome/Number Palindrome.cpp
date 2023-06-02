#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2=0;
    printf("Enter a number: ");
    scanf("%d", &num1);
    int n1=num1;

    while(n1 !=0)
    {
        num2=num2*10+(n1%10);
        n1/=10;
    }

    if(num1==num2)
    {
        printf("This number is Palindrome.");
    }
    else
    {
        printf("This number is not Palindrome.");
    }

    return 0;

}
