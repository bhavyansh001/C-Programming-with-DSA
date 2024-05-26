#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};

int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;   //means true
    }
    else{
    return 0;       //means false
    }
}
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    return 0;
}

int main(){

    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int* )malloc(s.size * sizeof(int)); //sizeof int because integers are used here, could be any custom data type too.

    struct stack *s = (struct stack* )malloc(sizeof(struct stack)); //The assigning of memory is a must as not doing it resulted in program failure
    s->size = 5;
    s->top = -1;
    s->arr = (int* )malloc(s->size * sizeof(int));
    //this also can be done, as s is pointer now passing it to functions is easy now, push, pop, printing values will be easier.
    

    // Check if stack is empty-
    if(isEmpty(s)){
        printf("\nThe stack is empty");
    }
    else{
        printf("\nStack is not empty");
    }
    

    //Manually pushing an element
    s->arr[0] = 7;
    s->top++;

    //Check if stack is empty-
    if(isEmpty(s)){
        printf("\nThe stack is empty");
    }
    else{
        printf("\nStack is not empty");
    }
    return 0;
}