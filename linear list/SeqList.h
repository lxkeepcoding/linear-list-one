#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>//断言




////静态
//#define N 100
//struct SeqList
//{
//	int a[N];
//	int size;
//};


typedef int SeqDataType;//起别名，方便修改

typedef struct SeqList
{
	SeqDataType *a;
	int size;//大小
	int capacity;//有效数据
}SeqList;


//初始化和销毁
void SeqListInit(SeqList *pq);
void SeqListDeatroy(SeqList *pq);

//打印数据
void SeqListPrint(SeqList *pq);


//数据结构中增删查改的接口

//1.头插尾插、头删尾删
void SeqListPushBack(SeqList *pq, SeqDataType x);
void SeqListPushFront(SeqList *pq, SeqDataType x);
void SeqListPopBack(SeqList *pqq);
void SeqListPopFront(SeqList *pq);

//中间插入、删除
void SeqListInsert(SeqList *pq,int pos, SeqDataType x);
void SeqListErase(SeqList *pq,int pos);

//查找
void SeqListFind(SeqList *pq, SeqDataType x);

//修改
void SeqListModify(SeqList *pq, int pos, SeqDataType x);


