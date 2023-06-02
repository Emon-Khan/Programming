#include<stdio.h>

int main(){
    int x;
    int ar[x];
    scanf("%d", &x);
    int *par = (int*)malloc(x*sizeof(int));
    par = ar;
    par[0] = 5;
    par[1] = 9;
    par[2] = 19;
    printf("%d\n", *ar);
    printf("%d\n", *(ar+1));
    printf("%d\n", *(ar+2));
    return 0;
}
