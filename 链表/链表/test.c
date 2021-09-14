#define _CRT_SECURE_NO_WARNINGS   1

#include"SList.h"

void TestOne()
{
	SLNode *plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	SListPushFront(&plist, 5);
	SListPushFront(&plist, 6);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
	SListPopFront(&plist);
	SListPrint(plist);
	SLNode *pos = SListFind(&plist, 3);
	if (pos)
	{
		printf("找到了\n");
	}
	else
	{
		printf("没有找到\n");
	}
	SListInsertBefore(&plist, pos, 0);
	SListInsertAfter(pos, 9);
	SListPrint(plist);
	SListEraseAfter(pos);
	SListPrint(plist);
	SListEraseCur(&plist,pos);
	SListPrint(plist);
}

int main()
{
	TestOne();
	return 0;
}