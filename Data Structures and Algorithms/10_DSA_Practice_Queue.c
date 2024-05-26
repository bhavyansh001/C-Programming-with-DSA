#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int* arr;
};

int isFull(struct queue* q){
    if(q->r == q->size - 1){
        return 1;
    }
    return 0;
}
int isEmpty(struct queue* q){
    if(q->f == q->r){
        return 1;
    }
    return 0;
}

void enqueue(struct queue* q, int val){
    if(isFull(q)){
        printf("Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}
int dequeue(struct queue* q){
    int a = -1;     //initialized with -1 as the function returns garbage value otherwise.
    if(isEmpty(q)){
        printf("The queue is empty\n");
    }
    else{
    q->f++;
    a = q->arr[q->f];
    }
    return a;
}

int main(){
    // struct queue* q = (struct queue* )malloc(q->size * sizeof(struct queue));
    // q->size = 10;
    // q->f = q->r = 0;
    // q->arr = (int* )malloc(q->size * sizeof(int));
    //This way the pointer can be provided too, then the address of q shall not be passed.

    struct queue q;
    q.size = 4;
    q.f = q.r = -1;
    q.arr = (int* )malloc(q.size * sizeof(int));
    if(isEmpty(&q)){
        printf("Empty queue\n");
    }
    else{
        printf("Not empty\n");
    }

    printf("%d and %d\n", q.r, q.f);
    enqueue(&q, 10);
    printf("%d and %d\n", q.r, q.f);
    enqueue(&q, 20);
    printf("%d and %d\n", q.r, q.f);
    enqueue(&q, 30);
    printf("%d and %d\n", q.r, q.f);
    enqueue(&q, 40);
    printf("%d and %d\n", q.r, q.f);

    printf("\n\n\n");
    
    printf("%d and %d\n", q.r, q.f);
    printf("Dequeuing element: %d\n", dequeue(&q));
    printf("%d and %d\n", q.r, q.f);
    printf("Dequeuing element: %d\n", dequeue(&q));
    printf("%d and %d\n", q.r, q.f);
    printf("Dequeuing element: %d\n", dequeue(&q));
    printf("%d and %d\n", q.r, q.f);
    printf("Dequeuing element: %d\n", dequeue(&q));
    printf("%d and %d\n", q.r, q.f);
    printf("Dequeuing element: %d\n", dequeue(&q));
    printf("%d and %d\n", q.r, q.f);

    return 0;
}