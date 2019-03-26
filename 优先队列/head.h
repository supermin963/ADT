#ifndef _Binheao_H
struct HeapStruct;
typedef struct HeapStruct* PriorityQueue;
#define MinPQSize 5
#define Mindata -10000

PriorityQueue  Initialize (int MaxElements);//初始化优先队列，maxelements为最大容量
void Destroy(PriorityQueue H);
void MakeEmpty(PriorityQueue H);
void Insert(int X,PriorityQueue H);//插入等同于push
int DeleteMin(PriorityQueue H);//删除最小，相当于pop
int IsEmpty(PriorityQueue H);//判断是否满着
int IsFull(PriorityQueue H);//判断是否满了

#endif


