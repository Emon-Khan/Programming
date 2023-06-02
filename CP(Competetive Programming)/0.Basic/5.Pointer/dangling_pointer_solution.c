#include<stdio.h>
#include<stdlib.h>
int* change(){
    int *px;
    px = (int*)malloc(sizeof(int));
    *px = 20;
    return px;
}
int main(){
    int *px;
    px = change();
    /*px = (int*)malloc(sizeof(int));
    char *cx;
    cx = (char*)malloc(sizeof(char));*/
    printf("%d\n", *px);
    return 0;
}
