#pragma once

#include<stdio.h>
#include<malloc.h>
#include<assert.h>

typedef int LDataType;
typedef struct ListNode
{
	struct ListNode*next;
	struct ListNode*prev;
	LDataType data;
}ListNode;

void ListPrint(ListNode*phead);
ListNode *BuyListNode(LDataType x);
ListNode * ListCreate();
void ListPushFront(ListNode *phead, LDataType x);
void ListPushBack(ListNode *phead, LDataType x);
void ListPopFront(ListNode *phead);
void ListPopBack(ListNode *phead);
ListNode *ListFind(ListNode *phead,LDataType x);
void ListModify(ListNode*pos,LDataType x);
void ListInsert(ListNode * pos, LDataType x);
void ListErase(ListNode * pos);
int ListEmpty(ListNode *phead);
int ListSize(ListNode *phead);
void ListDestory(ListNode *phead);
