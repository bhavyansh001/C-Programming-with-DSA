#include <stdio.h>

// In general, O(N log N) is considered a better algorithm time complexity than O(N 2), and most of our algorithms’ time complexity revolves around these two.
// The algorithm which results in constant space complexity is called an in-place sorting algorithm. Inplace sorting algorithms mostly use swapping and rearranging techniques to sort a data set.
// The stability of an algorithm is judged by the fact whether the order of the elements having equal status when sorted on some basis is preserved or not.

// (1,2,5,7,5) -> (1,2,5,5,7)
// First 5 first ->stable algorithm
// When the algorithm loads the data set into the memory (RAM), we say the algorithm follows internal sorting methods. In contrast, we say it follows the external sorting methods when the data doesn’t get loaded into the memory.
// Adaptive algorithm if it takes less time for sorted input
// Recursive algorithm if uses recursion for sorting

void printArray(int* A, int len){
    for(int i = 0; i < len; i++){
        printf("%d\t", A[i]);
    }
}

int greater(int a, int b){
    if(a > b)
    return 1;
    else
    return 0;
}
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int* A, int len){
    int i;
    int j = len;
    for(int j; j > 0; j--){
    for(i = 0; i < len; i++){
        
    if(greater(A[i], A[i + 1])){
        swap(&A[i], &A[i + 1]);
    }
}
}
}

int isSorted(int* A, int len){
    int i;
    int isSorted = 1;
    for(i = 0; i < len; i++){
    if(greater(A[i], A[i+1])){
        isSorted = 0;
        return 0;
    }
    }
    return 1;
}


void bubbleSortAdaptive(int* A, int len){
    //just a single traversal should do

    int i;
    int j = len;

    if(!isSorted(A, len)){

    for(int j; j > 0; j--){
    for(i = 0; i < len; i++){
        
    if(greater(A[i], A[i + 1])){
        swap(&A[i], &A[i + 1]);
    }
}
}
    }
    else if(isSorted){
        printf("Already sorted array\n");
        }
}

int main(){
    int A[] = {33, 31, 45, 17, 9};
    // int A[] = {1, 3, 5, 7, 9};
    printArray(A, 5);
    printf("\n");
    bubbleSortAdaptive(A, 5);
    printArray(A, 5);


    


    return 0;
}

//Bubble sort is-
// Not Adaptive by default
// Non Recursive
// Stable

// Time Complexity-
// Sum of first n natural numbers = n(n-1)/2;
// So O(n^2) is the time complexity



//Alternate way of making Adaptive Bubble sort -
// void bubbleSortAdaptive(int *A, int n){
//     int temp;
//     int isSorted = 0;
//     for (int i = 0; i < n-1; i++) // For number of pass
//     {
//         printf("Working on pass number %d\n", i+1);
//         isSorted = 1;
//         for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
//         {
//             if(A[j]>A[j+1]){
//                 temp = A[j];
//                 A[j] = A[j+1];
//                 A[j+1] = temp;
//                 isSorted = 0;
//             }
//         } 
//         if(isSorted){
//             return;
//         }
//     } 
// }