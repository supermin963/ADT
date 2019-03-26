#include <stdio.h>
#include <stdlib.h>
#include "head.h"

struct HeapStruct
{
    int Capacity;
    int Size;
    int *Elements;
};
//这个就是heap 的结构了，capacity代表的是总容量，然后size表示现在的大小，elements就一个数组。
PriorityQueue
Initialize(int MaxElements)
{
    PriorityQueue H;
    
    if(MaxElements<MinPQsize)
        Error("Priority queue size is too small");
    H = malloc(sizeof(struct HeapStruct));
    if(H==NULL)
        FatalError("out of space!!!");
    H->Elements = malloc((MaxElements+1)*sizeof(int));
    if(H->Elements== NULL)
        FatalError("out of space!!!");//这两个申请看一下是不是满了。
    H->Capacity = MaxElements;//容量设置为max
    H->Size = 0;
    H->Elements[0]= Mindata;
    return H;
}

void 
Insert(int X,PriorityQueue H)
{
    int i;
    if(IsFull H)
    {
        Error("Priority queue is full");
        return;
    }//检查是否已满
    for(i = ++H->Size;H->Elements[i/2]>X;i/=2)
        H->Elements[i] = H->Elements[i/2];
    H->Elements[i] = X;
    H->Size=H->Size+1;
    //插入操作是个向上冒的过程。首先在最后面建立一个“空穴”（i=++H->size）,
    //将这个X放进去看一下是不是比他的父节点小（elements[i/2])，
    //大的话，X直接放这儿没问题，小的话，i/2继续先前操作。
}

int
DeleteMin(PriorityQueue H)
{
    int i,Child;
    int MinElement,LastElement;
    if(IsEmpty(H))
    {
        Error("Prioty queue is empty");
        return H->Elements[0];
    }
    //常规判定是否空的

    MinElement = H->Elements[1];
    //1 处就是根节点了，先收起来噻
    LastElement = H->Elements[H->Size--];
    //ok，头节点被删掉之后，最后一个节点一定会空下来，先码住
    for(i=1;i*2<=H->Size;i=Child)
    {
        Child = i*2;
        if(Child != H->Size&&H->Elements[Child+1]<H->Elements[Child])
            Child++;//因为我们是想找的是更小的那一个孩子，ok比较下左右儿子，
        if(LastElement>H->Elements[Child])
            H->Elements[i] = H->Elements[Child];
        else 
            break;
    }
    H->Elements[i] = LastElement;
    return MinElement;
}

int main()
{

}