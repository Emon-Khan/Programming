#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, rem, GCD, LCM;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int n1=num1, n2=num2;
    while(n2 !=0){
        rem = n1%n2;
        n1=n2;
        n2=rem;
        GCD=n1;
    }
    printf("GCD: %d", GCD);
    return 0;
}

