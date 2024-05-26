//Main memory = RAM.
// In stack code is loaded and then replaced with return value(if it gives) then post returning, the memory gets freed.
// Functions get their location in stack as they come in main function
// From stack dynamically memory from heap can be allocated (using malloc in c and new operator in c++)
// Then post use can be freed
// Better than stack as in stack memory is occupied till the function returns value (or completes execution)
// If a function f(n) is O(n), it is O of powers of n too.{O(n^2), etc.}
// Big O gives upper bound, big omega gives lower bound, big theta gives both upper and lower bounds and hence most used.
// Common runtimes->
// 1 > logn > n > nlogn > n^2 > n^3 > 2^x > n^x
//best                                  worst

// Binary search gives O(logn) as the worst case which is better than the worst case of linear search {O(n)}
//Binary search works only on sorted arrays
//Array ADT->
// ADT stands for abstract data type

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr; //points at the first element of array
    //This pointer is defined to allocate memory in the heap
};

void createArray(struct myArray *a, int tSize, int uSize){
    //the pointer will expect an address, hence &marks in the instance
//Taken a pointer of struct myArray type, so dereferencing is to be done(follows: -)

    // (*a).total_size = tSize;
    //or using arrow operator as-

    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int*)malloc(tSize * sizeof(int));
}
//In cpp constructor can be used for this work

//* value at operator
//& address of operator

void show(struct myArray *a){
    for(int i = 0; i < a->used_size; i++){
        printf("%d\t", (a->ptr)[i]);
    }
}
void setVal(struct myArray *a){
    // int n;
    for(int i = 0; i < a->used_size; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &(a->ptr)[i]);
        
    }
}

int main(){

//creating instance for ADT
struct myArray marks;
createArray(&marks, 10, 5); //passed the address of marks(that is going to be an array)
setVal(&marks);
show(&marks);
    return 0;
}