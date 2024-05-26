#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index){
    if(size >= capacity){
        return -1;
    }
    for(int i = size - 1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

//One way of deletion
// void indDeletion(int arr[], int size, int index){
//     for(int i = index; i <= size; i++){
//         arr[i] = arr[i + 1];
//     }
// }

//Alternate way of deletion

void indDeletion(int arr[], int size, int index){
    arr[index] = arr[size - 1];
    size--;
}

//Searching of an element

int linerSearch(int arr[], int size, int element){
    for(int i = 0; i <= size; i++){
        if(arr[i] == element){
            printf("Element is at : %d index!\n", i);
            return 1;
        }
    }
    return -1;
}

//For sorted array-
int binarySearch(int arr[], int size, int element){
    int high, low, mid;
    low = 0;
    high = size - 1;

    mid = high + low / 2;

    while(mid > 0){
    mid = high + low / 2;
    if(arr[mid] == element){
        printf("The element is at %d index", mid);
        return 1;
    }
    if(arr[mid] < element){
        low = mid + 1;  //mid + 1 will be better than mid;
    }
    else if(arr[mid] > element){
        high = mid - 1; //mid - 1 will be better than mid;
    } 
}
return -1;
}

int main (){
    
    int arr[20] = {1, 2, 4, 7, 9};
    int size = 5, element = 3, index = 2;
    display(arr, size);
    indInsertion(arr, size, element, 20, index);

    display(arr, size + 1);

    //now that size has increased by 1, it is best to do the following thing-
    size += 1;

    indDeletion(arr, size, 2);
    display(arr, size - 1);

    linerSearch(arr, size, 7);
    binarySearch(arr, size, 7);

    return 0;
}