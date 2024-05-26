// In linked list the top is head.
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void linkedListTraversal(struct Node* ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node* top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p == NULL){      //that is, if no new nodes are being created as the heap memory is full.
        return 1;
    }
    else{
        return 0;
    }
}
 
struct Node* push(struct Node* top, int x){     //a function of type struct node which will RETURN THE POINTER TO NEW TOP NODE
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct Node* n = (struct Node*) malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;    //making it the first node
        return top;
    }
}
 
// int pop(struct Node** top){     //****passing the reference this time, because we are not returning the updated top from the function.
//     if(isEmpty(*top)){
//         printf("Stack Underflow\n");
//     }
//     else{
//         struct Node* n = *top;
//         *top = (*top)->next;
//         int x = n->data;    //for returning
//         free(n);
//         return x; 
//     }
// }

//Variation

int pop(struct Node* tp){
    if(isEmpty(tp)){
        printf("Stack Underflow\n");
    }
    else{
        struct Node* n = tp;
        top = (tp)->next;
        int x = n->data;        //for returning
        free(n);
        return x; 
    }
}
int stackTop(){
    return top->data;
}
//Big O in stacks using arrays is O(1)
// Peek using linked list- O(n)

int peek(int pos){      //not passing top as it is global variable
    struct Node* ptr = top;     //ptr is pointing at top, so number of times to move for position 1 = 0;
    for (int i = 0; (i < pos-1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr != NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int main(){
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    linkedListTraversal(top);


    // int element = pop(&top);     //when passing by reference **
    int element = pop(top);
    printf("Popped element is %d\n", element);
    linkedListTraversal(top);

    return 0;
}

//CPP code-

// #include<iostream>
// using namespace std;

// class stack{
// 	public:
// 		int data; 
// 		stack*next;	
// };

// int isempty(stack*s){
// 	if(s = NULL){
// 		return 1;
// 	}
// 	return 0;
// }

// int isfull(stack*top){
// 	stack *ptr = new stack;
// 	if(ptr == NULL){
// 		cout<<"Stack Overflow!..."<<endl;
// 		return 1;
// 	}
// 	return 0;
// }

// stack* pop(stack*top){
// 	stack *ptr = top;
// 	top = top->next;
// 	int x = ptr->data;
// 	delete ptr;
// 	return top; 
// }

// int stack_top(stack*top){
// 	return top->data;
// }

// int stack_bottom(stack*top){
// 	stack*ptr = top;
// 	while(ptr->next != NULL){
// 		ptr = ptr->next;
// 	}
// 	return ptr->data;
// }

// stack*push(stack*top,int value){
// 	stack*ptr = new stack;
// 	ptr->data = value;
// 	ptr->next = top;
// 	top = ptr;
// 	return top;
// }

// int peek(stack*top,int value){
// 	stack*ptr = top;
// 	int top_ind = 0;
// 	int ll_ind = top_ind + value - 1;
// 	for(int i = 1;i<=ll_ind;i++){
// 		ptr = ptr->next;
// 	}
// 	return ptr->data;
// }

// void display(stack*top){
// 	while(top!= NULL){
// 		cout<<top->data<<" ";
// 		top = top->next;
// 	}
// }

// int main(){
// //	Declaring nodes
// 	stack*first = new stack;
// 	stack*top = first;
// 	stack*second = new stack;
// 	stack*third = new stack;
// //	Initializing Data
// 	first->data = 5;
// 	second->data = 37;
// 	third->data = 49;
// //	Connecting nodes
// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;
// 	top = push(top,91);
// 	top = push(top,121);
// 	top = push(top,420);
// 	top = push(top,564);
// 	top = push(top,687);
// //	top = pop(top);
// 	display(top);
// 	cout<<endl<<peek(top,5);
// //	cout<<isfull(top)<<endl<<isempty(top)<<endl;
// //	cout<<endl<<stack_bottom(top)<<endl<<stack_top(top);
// return 0;
// }