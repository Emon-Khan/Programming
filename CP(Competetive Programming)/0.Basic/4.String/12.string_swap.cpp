#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[15] = "Peaky";
    char str2[15] = "Blinders";
    char temp[15];

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("%s", str1);
    printf("\n%s", str2);
    return 0;
}
