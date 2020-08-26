#include <stdio.h>

#ifndef _Cursor_H
typedef int PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

void InitialCursorSpace(void);

List MakeEmpty(List L);
int IsEmpty(const List L);
int IsLast(const Position P,const List L);
Position Find(int X,const List);
Position FindPrevious(int X,const List L);
void Delete(int X,List L);
void Insert(int X,Position P,List L);
void DeleteList(List L);
Position Header(List L);
Position Advande(const Position P);
int Retrieve(const Position P);

#endif

struct Node
{
    int Element;
    Position next;
};
struct Node CursorSpace[10];

static Position
CursorAlloc(void)
{
    Position P;

    P = CursorSpace[0].next;
    CursorSpace[0].next = CursorSpace[ P ].next;
    return P;
}

static void
CursorFree(Position P)
{
    CursorSpace[P].next = CursorSpace[0].next;
    CursorSpace[0].next = P;
}

int
IsEmpty(List L)
{
    return CursorSpace[L].next == 0;
}

int
IsLast(Position P,List L)
{
    return CursorSpace[P].next == 0;
}

Position
Find(int X,List L)
{
    Position P;
    P = CursorSpace[L].next;
    while(P && CursorSpace[P].Element != X)
    {
        P = CursorSpace[P].next;
    }
    return P;
}

int main()
{

    return 0;
}

