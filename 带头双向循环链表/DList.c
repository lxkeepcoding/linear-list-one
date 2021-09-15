#define _CRT_SECURE_NO_WARNINGS   1
#include"DList.h"


void ListPrint(ListNode*phead)
{
	ListNode *cur = phead->next;
	while (cur != phead)
	{
		printf("%d  ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
ListNode *BuyListNode(LDataType x)
{
	ListNode*node = (ListNode*)malloc(sizeof(ListNode));
	node->next = NULL;
	node->prev = NULL;
	node->data = x;
	return node;
}

ListNode * ListCreate()
{
	ListNode*phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

void ListPushFront(ListNode *phead, LDataType x)
{
	assert(phead);
	ListNode*first = phead->next;
	ListNode*newnode = BuyListNode(x);
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = first;
	first->prev = newnode;
}

void ListPushBack(ListNode *phead, LDataType x)
{
	assert(phead);
	ListNode *tail = phead->prev;
	ListNode *newnode = BuyListNode(x);

	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}

void ListPopFront(ListNode *phead)
{
	assert(phead);
	assert((phead->next) != phead);
	ListNode*first = phead->next;
	ListNode*second = first->next;
	free(first);
	first = NULL;
	phead->next = second;
	second->prev = phead;

}
void ListPopBack(ListNode *phead)
{
	assert(phead);
	assert((phead->next)!= phead);
	ListNode*tail = phead->prev;
	ListNode*tailprev = tail->prev;
	free(tail);
	tail = NULL;
	tailprev->next = phead;
	phead->prev = tailprev;
}


ListNode *ListFind(ListNode *phead, LDataType x)
{
	assert(phead);
	ListNode*cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void ListModify(ListNode*pos, LDataType x)
{
	assert(pos);
	pos->data = x;
}
void ListInsert(ListNode * pos, LDataType x)
{
	assert(pos);
	ListNode*prev = pos->prev;
	ListNode*newnode = BuyListNode(x);
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}
void ListErase(ListNode * pos)
{
	assert(pos);
	ListNode *prev = pos->prev;
	ListNode *next = pos->next;
	prev->next = next;
	next->prev = prev;
	free(pos);
	pos = NULL;

}

int ListEmpty(ListNode *phead)
{
	return phead->next == phead ? 1 : 0;
}
int ListSize(ListNode *phead)
{
	assert(phead);
	int size = 0;
	ListNode*cur = phead->next;
	while (cur != phead)
	{
		++size;
		cur = cur->next;
	}
	return size;
}
void ListDestory(ListNode *phead)
{
	assert(phead);
	ListNode*cur = phead->next;
	while (cur != phead)
	{
		ListNode*next = cur->next;
		free(cur);

		cur = next;
	}
	free(phead);
}