//Deletion, Circular Lists, Doubly Linked List
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *a){
    while(a != NULL){
    printf("%d\t", a->data);

    a = a->next;
    }
}

struct Node * deleteFirst(struct Node * head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i = 0; i < index - 1; i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node * deleteLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node * deleteByValue(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data != value && q->next != NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
    p->next = q->next;
    free(q);
    }
    return head;
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 18;
    head->next = second;

    second->data = 19;
    second->next = third;

    third->data = 20;
    third->next = fourth;

    fourth->data = 21;
    fourth->next = NULL;

    linkedListTraversal(head);
    printf("\n");
    // head = deleteFirst(head);
    //after deletion of first element
    // linkedListTraversal(head);

    //Deleting at a given index
    // head = deleteAtIndex(head, 2);
    // linkedListTraversal(head);

    //Deleting last element
    // head = deleteLast(head);
    // linkedListTraversal(head);

    //Deleting by value
    // head = deleteByValue(head, 19);
    // linkedListTraversal(head);

//Circular LL //last element points to head
//Try traversing, insertion, deletion

// Empty singly LL-
// p->NULL;

// Empty CLL-
// A pointer head that just provides the starting point for the LL pointing itself.

//Doubly LL
// Two pointers exist, reverse motion also possible

//POINTER POINTS THE WHOLE NODE, not the data


    return 0;
}