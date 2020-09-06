#include <stdio.h>
#include "Stack.h"
#include <stdlib.h>
#include "Tree.h"

#define EmptyEOS (-1)
#define MinStackSize (10)

struct StackRecord{
    int Capicity;
    int TopOfStack;
    Tree *Array;
};

struct TreeNode{
    int element;
    Tree Left;
    Tree right;
};

int IsEmpty(Stack S){
    return S->TopOfStack == EmptyEOS;
}

Stack
CreateStack(int MaxElements){
    Stack S;
    if(MaxElements < MinStackSize)
        printf("Stack Size is too Small");

    S = malloc(sizeof(struct StackRecord));
    if(S==NULL){
        printf("out of space");
    }

    S->Array = malloc(sizeof(Tree) * MaxElements);
    if(S->Array == NULL){
        printf("out of space");
    }
    S->Capicity = MaxElements;
    MakeEmpty(S);

    return S;
}

void DisposeStack(Stack S){
    if(S != NULL){
        free(S->Array);
        free(S);
    }
}
void MakeEmpty(Stack S){
    S->TopOfStack == EmptyEOS;
}

void push(struct TreeNode t, Stack S){
    if(IsFull(S)){
        printf("full stack");
    }
    else{
        S->Array[++S->TopOfStack] = &t;
    }
}

struct TreeNode
top(Stack S){
    if(!IsEmpty(S))
        return *S->Array[S->TopOfStack];
    else
        printf("empty stack");
        return *S->Array[S->TopOfStack];
}

void pop(Stack S){
    if(IsEmpty(S))
        printf("empty stack");
    else
        S->TopOfStack--;
}
int IsFull(Stack S){
    return S->Capicity > S->TopOfStack;
}

int main() {
    Stack s = CreateStack(10);
    struct TreeNode t;

    return 0;
}
