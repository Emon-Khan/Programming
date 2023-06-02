#include<stdio.h>
int* getValue(){
    int x=20;
    return &x;
}
int main(){
    int *px = getValue();
    printf("%d\n", *px);
    return 0;
}
