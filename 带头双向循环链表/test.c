#define _CRT_SECURE_NO_WARNINGS   1

#include"DList.h"

void TestOne()
{
	ListNode*plist = ListCreate();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);

	ListPrint(plist);

	ListPushFront(plist, 1);
	ListPushFront(plist, 2);
	ListPushFront(plist, 3);
	ListPushFront(plist, 4);

	ListPrint(plist);

	ListPopBack(plist);
	ListPopBack(plist);

	ListPrint(plist);
	ListNode*pos = ListFind(plist, 1);
	if (pos)
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	ListInsert(pos, 0);
	ListPrint(plist);
	ListModify(pos, 9);
	ListPrint(plist);
	ListErase(pos);
	ListPrint(plist);
	printf("%d\n", ListEmpty(plist));
	printf("%d\n", ListSize(plist));
	ListDestory(plist);
	plist = NULL;
}

int main()
{
	TestOne();
	return 0;
}