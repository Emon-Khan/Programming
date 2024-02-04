#include<iostream>
using namespace std;

void BubbleSort(int A[], int n){
    int i, j, temp;
    //int count = 0;

    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            //count++;
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    //cout<<count<<endl;
}

int main(){
    int A[] = {3, 4, 7, 2, 6, 1};
    BubbleSort(A, 6);
    for(int k = 0; k<6; k++){
        cout<< A[k] << " ";
    }
    return 0;
}
