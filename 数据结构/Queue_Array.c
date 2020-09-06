#include <stdio.h>

struct QueueRecord;
typedef struct QueueRecord *Queue;
typedef int ElementType;

int isEmpty(Queue Q);
int isFull(Queue Q);
Queue CreateQueue(int MaxElements);
void DisposeQueue(Queue Q);
void MakeEmpty(Queue Q);
void Enqueue(ElementType X, Queue Q);
ElementType Front(Queue Q);
void Dequeue(Queue Q);
ElementType FrontAndDequeue(Queue Q);

#define MinQueueSize (5)

struct QueueRecord{
    int Capicity;
    int Front;
    int Rear;
    int Size;
    ElementType* Array;
};


int isEmpty(Queue Q){
    return Q->Size == 0;
}

void MakeEmpty(Queue Q){
    Q->Size = 0;
    Q->Front = 1;
    Q->Rear = 0;
}

static int
Succ(int value, Queue Q){
    if(++value == Q->Capicity){
        value = 0;
    }
    return value;
}

void
Enqueue(ElementType X, Queue Q){
    if(isFull(Q))
        printf("Full Queue");
    else{
        Q->Size++;
        Q->Rear = Succ(Q->Rear, Q);
        Q->Array[Q->Rear] = X;
    }
}


int main()
{
    return 0;
}

