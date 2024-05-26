#include <stdio.h>

void printArray(int* A, int len){
    for(int i = 0; i < len; i++){
        printf("%d\t", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high){
    int pivot = A[low];     //considering first element as pivot
    int i = low + 1;
    int j = high;
    int temp;

    do{
        while(A[i] <= pivot){
            i++;
        }
        while(A[j] > pivot){
            j--;
        }
        if(i < j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while(i < j);
    temp = A[low];      //writing pivot won't change the element in array
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void quickSort(int A[], int low, int high){
    int partitionIndex;

    if(low < high){
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);      //recursive call for sorting left of subarray
        quickSort(A, partitionIndex + 1, high);     //recursive call for sorting right of subarray
    }
}


int main(){
    // int A[] = {1, 5, 2, 4, 9, 3};
    int A[] = {3, 5, 2, 13, 12, 67};
    printArray(A, 6);
    quickSort(A, 0, 5);
    printArray(A, 6);


    return 0;
}

//QuickSort
// Worst case- Sorted array, hence time complexity = O(n^2);
// Best case- Array that gets divided into two halves(example- array of length 16->8->4->2->1); time complexity = O(nlogn);

// Unstable
// using rand() to choose random pivot reduces the time complexity.
//Recursive

//changing in same array so space complexity is optimised

//Steps-
//Partioning-
// i and j move to find greater and lesser respectively
// when they are found, the values of i and j are interchanged
// if while finding, i and j cross each other, swap A[j] with pivot
// else swap A[i] and A[j]
// again repeat the same, this time i and j will surely cross(that is, j becomes < i); and hence swap pivot and A[j]
//Now two partitions exixt, left one and right one and the pivot is at its required position 
//in last 10-12 mins explained