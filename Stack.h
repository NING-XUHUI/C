/**
* @file Stack.h
* @brief 
* @details
* @date 2020/9/6 1:01 上午
* Created by 宁旭晖 on 2020/9/6.
*/
#ifndef C_STACK_H
#define C_STACK_H
#include "Tree.h"
struct StackRecord;
typedef struct StackRecord *Stack;

int IsEmpty(Stack S);
int IsFull(Stack S);
Stack CreateStack(int MaxElements);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void push(struct TreeNode t, Stack S);
struct TreeNode top(Stack S);
void pop(Stack S);
struct TreeNode topAndPop(Stack S);
#endif//C_STACK_H
