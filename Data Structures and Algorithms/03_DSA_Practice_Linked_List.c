#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;  //pointer of struct node type
    //hence it is a self-referencing structure
};

void linkedListTraversal(struct Node *a){
    while(a != NULL){
    printf("%d\t", a->data);
    //updating pointer now
    a = a->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}   //Function of type struct Node *

struct Node *insertAtIndex(struct Node *head, int data, int index){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;  //initialized p with head

    int i = 0;      //placing p at the desired place
    while(i != index - 1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertAtEnd(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    ptr->data = data;

    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

    //Inserting after a node
struct Node *insertAfterNode(struct Node *head, struct Node* prevNode, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

int main(){

    //Making head, second and third (and fourth) of data type- struct Node
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
    // head = insertAtFirst(head, 22);
    // head = insertAtIndex(head, 23, 2);
    // head = insertAtEnd(head, 24);
    
    // linkedListTraversal(head);

    //Inserting after a node
    head = insertAfterNode(head, third, 25);
    linkedListTraversal(head);
    return 0;
}