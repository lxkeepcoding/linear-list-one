#pragma once

#include<stdio.h>
#include<malloc.h>
#include<assert.h>

typedef int SLDataType;
typedef struct SListNode
{
	int data;
	struct SListNode *next;
}SLNode;

//单向+带头+不循环
void SListPrint(SLNode *plist);

SLNode *BuySLNode(SLDataType x);

//二级指针
void SListPushFront(SLNode **pplist, SLDataType x);
void SListPushBack(SLNode **pplist, SLDataType x);
void SListInsertAfter(SLNode *pos, SLDataType x);
void SListInsertBefore(SLNode **pplist,SLNode *pos, SLDataType x);


void SListPopFront(SLNode **pplist);
void SListPopBack(SLNode **pplist);
void SListEraseAfter(SLNode*pos);
void SListEraseCur(SLNode **pplist,SLNode*pos);

SLNode*SListFind(SLNode **pplist, SLDataType x);
void SListModify(SLNode *plist, SLDataType x, SLDataType y);