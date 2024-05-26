#include <stdio.h>

void printArray(int* A, int len){
    for(int i = 0; i < len; i++){
        printf("%d\t", A[i]);
    }
    printf("\n");
}

void merge(int A[], int mid, int low, int high){        //just to merge
    int i, j, k, B[10];       //size of B can be high - low + 1; else allocate memory dynamically
    i = low;
    j = mid + 1;
    k = low;            //i marks the current element of the first subarray of array A, and j marks the first element of the second subarray. And, k is the iterator for array B.

    while(i <= mid && j <= high){       //made two subarrays, first frpm 0 to mid, second from mid + 1 to high
        if(A[i] < A[j]){
            B[k] = A[i];
            i++;
            k++;
        }
        else{
            B[k] = A[j];
            j++;
            k++;
        }
    }                                   //The next two while loops are to empty the remaining element of array in the array B.
    while(i <= mid){
        B[k] = A[i];
         k++;
        i++;
    }
    while (j <= high){
        B[k] = A[j];
        k++;
        j++;
    }
    for(int i = low; i <= high; i++){
        A[i] = B[i];        //B was auxillary array, now transfering the elements from B back to A
    }
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low < high){     //that is there must be >1 elements in the subarray
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main(){
    int A[] = {3, 8, 9, 1, 12, 2};
    printArray(A, 6);
    mergeSort(A, 0, 5);
    printArray(A, 6);
    return 0;
}