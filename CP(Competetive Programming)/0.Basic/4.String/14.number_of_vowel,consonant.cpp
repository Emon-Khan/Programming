#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[15], str;
    int i, vowel, consonant, digit, word, others;
    printf("Enter a string: ");
    gets(s);
    i = vowel = consonant = digit = word = others = 0;
    while((str=s[i])!='\0')
    {
        if(str=='a' ||str=='e' ||str=='i' ||str=='o' ||str=='u' || str=='A' ||str=='E' ||str=='I' ||str=='O' ||str=='U')
        {
            vowel++;
        }
        else if(str>='a' && str<='z'||str>='A' && str<='Z')
        {
            consonant++;
        }
        else if(str>='0' && str<='9')
        {
            digit++;
        }
        else if(str==' ')
        {
            word++;
        }
        else
        {
            others++;
        }
        i++;
    }
    word++;
    printf("\nVowel: %d", vowel);
    printf("\nConsonant: %d", consonant);
    printf("\nDigit: %d", digit);
    printf("\nWord: %d", word);
    printf("\nOthers: %d", others);

    return 0;
}
