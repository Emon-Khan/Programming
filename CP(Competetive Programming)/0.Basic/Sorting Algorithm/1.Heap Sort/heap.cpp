//max heap
/*#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i){
    int largest = i;
    cout<<"largest "<<largest<<endl;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l<n && arr[l]>arr[largest]){
        largest = l;
    }
    if(r<n && arr[r]>arr[largest]){
        largest = r;
    }
    if(largest != i){
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n){
    for(int i = n/2-1; i>=0; i--){
        heapify(arr, n, i);
    }
    for(int i = n-1; i>0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
    //printArray(arr, n);
}
int main(){
    int arr[] = {5, 8, 4, 15, 17, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, n);
    for(int i = n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }

}*/

//min heap
/*#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i){
    int lowest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<n && arr[l]<arr[lowest]){
        lowest = l;
    }
    if(r<n && arr[r]<arr[lowest]){
        lowest = r;
    }
    if(lowest != i){
        swap(arr[i], arr[lowest]);
        heapify(arr, n, lowest);
    }
}
void heapSort(int arr[], int n){
    for(int i = n/2 - 1; i>=0; i--){
        heapify(arr, n, i);
    }
    for(int i = n-1; i>0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
int main(){
    int arr[] = {5, 8, 4, 15, 17, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, n);
    for(int i = n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}*/
//min heap using heap sort instead of heapify
#include<iostream>
using namespace std;
void heapsort2(int arr[], int n, int i){
    int lowest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<n && arr[l]<arr[lowest]){
        lowest = l;
    }
    if(r<n && arr[r]<arr[lowest]){
        lowest = r;
    }
    if(lowest != i){
        swap(arr[i], arr[lowest]);
        heapsort2(arr, n, lowest);
    }
}
void heapSort(int arr[], int n){
    for(int i = n/2 - 1; i>=0; i--){
        heapsort2(arr, n, i);
    }
    for(int i = n-1; i>0; i--){
        swap(arr[0], arr[i]);
        heapsort2(arr, i, 0);
    }
}
int main(){
    int arr[] = {5, 4, 8, 15, 17, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, n);
    for(int i = n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}