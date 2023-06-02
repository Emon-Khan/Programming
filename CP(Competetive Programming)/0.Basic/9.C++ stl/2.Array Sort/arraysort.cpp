#include<stdio.h>
#include<string>
#include<queue>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int ar[6] = {5, 2, 1, 6, 8, 4};

    sort(ar+1, ar+6);

    for(int i=0; i<6; i++){
        printf("%d\t", ar[i]);
    }

    return 0;
}
