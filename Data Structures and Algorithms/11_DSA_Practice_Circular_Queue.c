#include <stdio.h>
#include <stdlib.h>

//When dequeueing, there are leftover spaces which go waste, to prevent this, circular Queue is used.
struct CQueue{
    int size;
    int f;
    int r;
    int* arr;
};

int isFull(struct CQueue* q){
    if((q->r + 1) % q->size == q->f){
        return 1;
    }
    return 0;
}
int isEmpty(struct CQueue* q){
    if(q->f == q->r){
        return 1;
    }
    return 0;
}

void enqueue(struct CQueue* q, int val){
    if(isFull(q)){
        printf("Queue is full\n");
    }
    else{
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}
int dequeue(struct CQueue* q){
    int a = -1;     //initialized with -1 as the function returns garbage value otherwise.
    if(isEmpty(q)){
        printf("The queue is empty\n");
    }
    else{
    q->f = (q->f + 1) % q->size;
    a = q->arr[q->f];
    }
    return a;
}

//In CQueue, one element is always empty as f is one position behind the first element.

int main(){
    struct CQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int* )malloc(q.size * sizeof(int));

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    if(isFull(&q)){
        printf("Queue is full\n");
    }

    printf("Dequeing element %d\n", dequeue(&q));
    printf("Dequeing element %d\n", dequeue(&q));
    printf("Dequeing element %d\n", dequeue(&q));
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }

    return 0;
}