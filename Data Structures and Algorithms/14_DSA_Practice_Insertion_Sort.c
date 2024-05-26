#include <stdio.h>

void printArray(int* A, int len){
    for(int i = 0; i < len; i++){
        printf("%d\t", A[i]);
    }
    printf("\n");
}

void insertionSort(int* A, int len){
    for(int i = 1; i < len; i++){       //loop for number of passses, i starting from 1 as the first element is already sorted.
        int temp;
        temp = A[i];

        int j = i - 1;                  //to iterate the sorted array part

        while(j != -1 && A[j] > temp){
            A[j + 1] = A[j];
            j--;
        }
            A[j + 1] = temp;
    }
    printf("\n");
}

int main(){
    // int A[] = {1, 5, 2, 4, 9, 3};
    int A[] = {12, 54, 65, 0, 23, 9};
    printArray(A, 6);
    insertionSort(A, 6);
    printArray(A, 6);


    return 0;
}

//Insertion sort
// Time complexity O(n^2);
// Stable
// Adaptive; O(n) if already sorted.