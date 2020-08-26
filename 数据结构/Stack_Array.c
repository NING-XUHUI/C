#include <stdio.h>
#include <stdlib.h>

#ifndef _Stack_h

struct StackRecord;
typedef struct StackRecord* Stack;

int IsEmpty(Stack S);
int IsFull(Stack S);
Stack CreateStack(int MaxElements);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(int X,Stack S);
int Top(Stack S);
void Pop(Stack S);
int TopAndPop(Stack S);

#endif

#define EmptyTOS (-1)
#define MinStackSize (5)

/**
 * 栈的声明
 */ 

struct StackRecord
{
    int Capacity;
    int TopOfStack;
    int *array;
};

/**
 * 栈的创建
 */ 

Stack
CreateStack(int MaxElements)
{
    Stack S;
    if(MaxElements < MinStackSize)
        printf("Stack size is too small!");
        return NULL;

    S = malloc(sizeof(struct StackRecord));
    if(S == NULL)
        printf("Out of space!!");
    
    S->array = malloc(sizeof(int) * MaxElements);
    if(S->array == NULL)
        printf("Out of space!!");

    S->Capacity = MaxElements;
    MakeEmpty(S);

    return S;
}

void
DisposeStack(Stack S)
{
    if(S != NULL)
    {
        free(S->array);
        free(S);
    }
}

int IsEmpty(Stack S)
{
    return S->TopOfStack == EmptyTOS;
}

void MakeEmpty(Stack S)
{
    S->TopOfStack = EmptyTOS;
}

void Push(int X,Stack S)
{
    if(IsFull(S))
    {
        printf("Full Stack!");
    }
    else
    {
        S->array[++S->TopOfStack] = X;
    }
}

int 
Top(Stack S)
{
    if(!IsEmpty(S))
        return S->array[S->TopOfStack];
    printf("Empty Stack!");
    return 0;
}

void
Pop(Stack S)
{
    if(!IsEmpty(S))
        S->TopOfStack--;
    printf("Empty Stack!");
}

int
TopAndPop(Stack S)
{
    if(!IsEmpty(S))
        return S->array[S->TopOfStack--];
    printf("Empty Stack!");
    return 0;
}


int main()
{
    printf("Hello world\n");
    return 0;
}

