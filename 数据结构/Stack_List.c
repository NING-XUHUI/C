#include <stdio.h>
#include <stdlib.h>

#ifndef _Stack_h

struct Node;
typedef struct Node* PtrToNode;
typedef PtrToNode Stack;

int IsEmpty(Stack S);
Stack CreateStack(void);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(int X, Stack S);
int Top(Stack S);
void Pop(Stack S);

#endif

struct Node
{
    int Element;
    PtrToNode Next;
};

int 
IsEmpty(Stack S)
{
    return S->Next==NULL;
}

Stack
CreateStack(void)
{
    Stack S;
    S = malloc( sizeof(struct Node) );
    if(S == NULL)
    {
        printf("Out of space!!");
        return NULL;
    }
    S->Next = NULL;
    MakeEmpty(S);
    return S;
}

void
MakeEmpty( Stack S )
{
    if(S == NULL)
        printf("Must use CreateStack first!");
    else
        while(!IsEmpty(S))
            Pop(S);
}

void
Push(int X,Stack S)
{
    PtrToNode TmpCell;

    TmpCell = malloc( sizeof(struct Node) );
    if(TmpCell == NULL)
        printf("Out of space!!");
    else
        TmpCell->Element = X;
        TmpCell->Next = S->Next;
        S->Next = TmpCell;
}

int
Top(Stack S)
{
    if(!IsEmpty(S))
        return S->Next->Element;
    else
        printf("Empty Stack!");
    return 0;
}

void
Pop(Stack S)
{
    PtrToNode FirstCell;

    if(IsEmpty(S))
        printf("Empty Stack!");
    else
        FirstCell = S->Next;
        S->Next = FirstCell->Next;
        free(FirstCell);
}

int main()
{
    return 0;
}

