#include<iostream>
using namespace std;

void selectionSort(int A[], int n){
    for(int i = 0; i < n-1; i++){
        int iMin = i;
        for(int j = i+1; j<n; j++){
            if(A[j] < A[iMin])
                iMin = j;
        }
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}

int main(){
    int A[] = {3, 4, 7, 2, 6, 1};
    selectionSort(A, 6);
    for(int i = 0; i<6; i++){
        cout<< A[i] << " ";
    }

}
