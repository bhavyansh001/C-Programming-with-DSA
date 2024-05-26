#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    char* arr;
};

int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    }
    return 0;
}
int match(char a, char b){
    if(a == '(' && b == ')'){
        return 1;
    }
    if(a == '{' && b == '}'){
        return 1;
    }
    if(a == '[' && b == ']'){
        return 1;
    }
    return 0;
}
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size -1){
        return 1;
    }
    return 0;
}
void push(struct stack* ptr, char value){
    if(isFull(ptr)){
        printf("Stack Overflow!");
    }
    else{
    ptr->top++;
    ptr->arr[ptr->top] = value;
    }
}
// char pop(struct stack* ptr){
//     if(isEmpty(ptr)){
//         printf("Cannot pop anymore, stack underflow!");
//         return 0;
//     }
//     else{
//         ptr->top--;
//         return 1;
//     }
// }

//For multiple parenthesis matching
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Cannot pop anymore, stack underflow!");
        return 0;
    }
    else{
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}


// int ParenthesisMatch(char* exp){
//     //best defined and initialized here!
//     struct stack* sp;
//     sp->size = 20;
//     sp->top = -1;
//     sp->arr = (char* )malloc(sp->size * sizeof(char));

//     for(int i = 0; exp[i] != '\0'; i++){
//         if(exp[i] == '('){
//             push(sp, '(');
//         }
//         else if(exp[i] == ')'){
//             if(isEmpty(sp)){
//                 return 0;
//             }
//             pop(sp);
//         }
//     }
//     if(isEmpty(sp)){
//         return 1;   //returns 1 because at the end it must be empty
//     }
//     else{
//         return 0;
//     }
// }

//for multiple parenthesis matching
int ParenthesisMatch(char* exp){
    //best defined and initialized here!
    struct stack* sp;
    sp->size = 20;
    sp->top = -1;
    sp->arr = (char* )malloc(sp->size * sizeof(char));

    for(int i = 0; exp[i] != '\0'; i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push(sp, exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if(isEmpty(sp)){
                return 0;
            }
            char popped_ch = pop(sp);
            if(!match(popped_ch, exp[i])){
                return 0;   //1 is to be returned when stack gets empty, hence !match.
            }
        }
    }
    if(isEmpty(sp)){
        return 1;   //returns 1 because at the end it must be empty
    }
    else{
        return 0;
    }
}

int main(){
    //sp declared in the function
    // char * exp = "((8)(*--$$9))()";

    //for multiple parenthesis match-
    // char* exp = "[4-6]((8){(9-8)})";
    char* exp = "[({{()}})]";
    if(ParenthesisMatch(exp)){
        printf("Matches!");
    }
    else{
        printf("Doesn't match");
    }

    return 0;
}