#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1000;
    int *p;
    p = &a;
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, Value = %d\n",p,*p);
    printf("Address = %d, Value = %d\n",p+1, *(p+1));

    char *p1;
    p1 = (char*)p;
    printf("Size of character is %d bytes\n", sizeof(char));
    printf("\n\n\nAddress = %d, Value = %d\n",p1,*p1);
    printf("Address = %d, Value = %d\n",p1+1, *(p1+1));

    return 0;

}

