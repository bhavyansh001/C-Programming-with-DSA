#include <stdio.h>

void printArray(int* A, int len){
    for(int i = 0; i < len; i++){
        printf("%d\t", A[i]);
    }
    printf("\n");
}

void selectionSort(int* A, int len){
    for(int i = 0; i < len; i++){       //to iterate through the array
        int j = i + 1;
        for(j; j < len; j++){
        if(A[j] < A[i]){
            int temp;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    }
}

int main(){
    // int A[] = {1, 5, 2, 4, 9, 3};
    int A[] = {3, 5, 2, 13, 12, 67};
    printArray(A, 6);
    selectionSort(A, 6);
    printArray(A, 6);

    


    return 0;
}

// Selection sort
// Time complexity O(n²)
// Not adaptive
// Not stable
// Makes least number of swaps