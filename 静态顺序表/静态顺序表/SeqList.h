

#include<stdio.h>


#define N 100
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType _a[N];
	size_t _size;
}SeqList;


//初始化
void SeqListInit(SeqList *seq);

//打印
void SeqListShow(SeqList *seq);

//头插
void SeqListPushFront(SeqList *seq,SLDataType x);
//尾插
void SeqListPushBack(SeqList *seq, SLDataType x);

//头删
void SeqListPopFront(SeqList *seq);
//尾删
void SeqListPopBack(SeqList *seq);

//查找
int SeqListSearch(SeqList *seq, SLDataType x);

//修改
void SeqListModify(SeqList *seq, int pos,SLDataType x);