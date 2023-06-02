#include <stdio.h>
#include<string.h>

int main(void) {
	char str[50]="Coronavirus is very dangerous to our country";
    //fgets(str,50,stdin);
	for(int i=0; str[i]!='\0'; i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i] = str[i]+32;
		}
	}
	printf("%s\n", str);
	//puts(str);
	return 0;
}

