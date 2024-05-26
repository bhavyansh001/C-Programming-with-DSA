#include <stdio.h>
#include <stdlib.h>

void printArray(int* A, int len){
    for(int i = 0; i < len; i++){
        printf("%d\t", A[i]);
    }
    printf("\n");
}

int max(int A[], int len){
    int max = 0;
    for(int i = 0; i < len; i++){
        if(max < A[i]){
        max = A[i];
    }
    }
    return max;
}

void countSort(int* A, int len){
    int i = 0, j = 0;       //i is counter for count array, j is counter for array A.

    int maximum = max(A, len);

    //The count array
    int* count = (int* )calloc((maximum + 1), sizeof(int));    //calloc initializes the elements with 0;

    for(i; i < len; i++){
        count[A[i]] = count[A[i]] + 1;        //populate the count array accordingly
    }

    i = 0;                                  // reinitialized as the value of i is ought to be different because it had been in the loop;

    while(i <= maximum){                    //loop for putting values in the sorted array
        if(count[i] > 0){
            A[j] = i;
            count[i] = count[i] - 1;        //count[i]--;
            j++;
        }
        else{                               //doesn't work without else
        i++;
    }
    }
}

int main(){
    int A[] = {3, 8, 12, 12, 12, 2};
    printArray(A, 6);
    // printf("\nMax element = %d", max(A, 6));
    countSort(A, 6);
    printArray(A, 6);
    return 0;
}

//Time complexity = O(len + (len+1)){sizes of A and count array} for huge len, reduces to O(n){best}
//But uses more space