#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[30] = "My name is ";
    char s2[] = "Emon Khan";

    int i=0; //len=0;
    while(s1[i]!='\0'){
        i++;
        //len++;
    }
    for(int j=0; s2[j]!='\0'; j++){
        s1[i+j]=s2[j];
    }
    printf("%s", s1);
    strcat(s1, s2);
    printf("\n%s", s1);
    return 0;
}
