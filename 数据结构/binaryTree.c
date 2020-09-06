#include <stdio.h>




typedef struct TreeNode* PtrToNode;
typedef struct PtrToNode Tree;
typedef int ElementType;


struct TreeNode{
    ElementType Element;
    Tree left;
    Tree right;
};



struct StackRecord;
typedef struct StackRecord *Stack;

int IsEmpty(Stack S);
int IsFull(Stack S);
Stack CreateStack(int MaxElements);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(TreeNode T,Stack S);




int main()
{
    printf("Hello world\n");
    return 0;
}

