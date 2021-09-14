#include<stdio.h>
#include<malloc.h>
#include<assert.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType  *_a;//动态开辟的动态数组
	size_t _size;//有效数据个数
	size_t _capacity;//容量空间的大小
}SeqList;

//初始化
void SeqListInit(SeqList *seq);
//释放
void SeqListDestory(SeqList *seq);

//打印
void SeqListShow(SeqList *seq);

//检查容量
void SeqListCherk(SeqList *seq);

//头插
void SeqListPushFront(SeqList *seq, SLDataType x);
//尾插
void SeqListPushBack(SeqList *seq, SLDataType x);

//头删
void SeqListPopFront(SeqList *seq);
//尾删
void SeqListPopBack(SeqList *seq);

//查找
int SeqListSearch(SeqList *seq, SLDataType x);

//修改
void SeqListModify(SeqList *seq, int pos, SLDataType x);
