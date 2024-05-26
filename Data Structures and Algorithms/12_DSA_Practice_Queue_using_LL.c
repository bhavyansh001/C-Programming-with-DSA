#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* r = NULL;
struct Node* f = NULL;      //Defining in main function provides copy of it which results in non- execution. Hence declared globally

void linkedListTraversal(struct Node* ptr){
    if(f == NULL){
        printf("Queue is empty\n");
    }
    else{
    printf("Printing elements of LL: ");
    while(ptr != NULL){
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    }
}

void enqueue(int val){
    struct Node* n = (struct Node* )malloc(sizeof(struct Node));
    if(n == NULL){
        printf("Queue is full\n");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f == NULL){
            f = r = n;
        }
        else{
            r->next = n;
            r = n;
        }
    }
}
int dequeue(){
    int val = -1;
    struct Node* ptr = f;
    if(f == NULL){
        printf("Queue is empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main(){
    linkedListTraversal(f);
    enqueue(30);
    enqueue(30);
    enqueue(40);
    linkedListTraversal(f);
    printf("Dequeing element: %d\n", dequeue());
    linkedListTraversal(f);


    return 0;
}

//Double Ended Queues-
// Elements can be enqued/dequed at the f as well as r end;

// Methods-
// enqueueF()
// enqueueR()
// dequeueF()
// dequeueR()

// Types-
// Restricted input DEQueue- No insertion at the front end, but deletion from both ends is possible.
// Restricted output DEQueue- No deletion from rear end, insertion can be performed on both the ends.