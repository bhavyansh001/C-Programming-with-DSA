#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};

int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    return 0;
}
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;   //means true
    }
    else{
    return 0;       //means false
    }
}

void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("\nStack underflow");
    }
    else{
        ptr->top--;
        //to return the removed value-
        //+1 not required if placing before decrementing
        int val = ptr->arr[ptr->top + 1];
        return val;
    }
}

int peek(struct stack* ptr, int i){
    int arrayIndex = ptr->top - i + 1;
    if(arrayIndex < 0){
        printf("Not a valid position");
        return -1;
    }
    return ptr->arr[arrayIndex];
}

int stackTop(struct stack* ptr){
    return ptr->arr[ptr->top];
}
int stackBottom(struct stack* ptr){
    return ptr->arr[0];
}

int main(){
    struct stack *sp = (struct stack* )malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int* )malloc(sp->size * sizeof(int));
    printf("Successful\n");

    //Checking if functions work-
    // printf("%d", isFull(sp));
    // printf("%d", isEmpty(sp));

    //pushing the values-
    push(sp, 3);
    push(sp, 4);
    push(sp, 6);
    push(sp, 7);
    push(sp, 6);
    push(sp, 12);
    push(sp, 33);
    push(sp, 36);
    push(sp, 38);
    push(sp, 39);
    push(sp, 79);
    // printf("%d", isFull(sp));
    // printf("%d", isEmpty(sp));

    //Since the value of pop was returned too-
    // int pops = pop(sp);
    // printf("\nThe value popped is: %d ", pops);
    // pops = pop(sp);
    // printf("\nThe value popped is: %d ", pops);
    // pops = pop(sp);
    // printf("\nThe value popped is: %d ", pops);
    // pops = pop(sp);
    // printf("\nThe value popped is: %d ", pops);
    // pops = pop(sp);
    // printf("\nThe value popped is: %d ", pops);
    // pops = pop(sp);
    // printf("\nThe value popped is: %d ", pops);
    // pops = pop(sp);
    // printf("\nThe value popped is: %d ", pops);
    // pops = pop(sp);
    // printf("\nThe value popped is: %d ", pops);
    // pops = pop(sp);
    // printf("\nThe value popped is: %d ", pops);
    // pops = pop(sp);
    // printf("\nThe value popped is: %d ", pops);
    // pops = pop(sp);

    // int pops = pop(sp);
    // printf("\nThe value popped is: %d ", pops);
    // for(int j = 1; j <= sp->top + 1; j++){
    //     printf("\nValue at position %d is %d", j, peek(sp, j));
    // }

    printf("\nThe value at top is: %d", stackTop(sp));
    printf("\nThe value at bottom is: %d", stackBottom(sp));

    return 0;
}