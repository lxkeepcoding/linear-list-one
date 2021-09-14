#define _CRT_SECURE_NO_WARNINGS   1

#include"SeqList.h"

void TestOne()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushFront(&s, 1);
	SeqListPushFront(&s, 2);
	SeqListShow(&s);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListShow(&s);
	SeqListPopBack(&s);
	SeqListPopFront(&s);
	SeqListShow(&s);
	int pos = SeqListSearch(&s,1);
	if (pos == -1)
	{
		printf("find fail\n");
	}
	else
	{
		printf("该元素的位置为%d\n", pos);
	}
	SeqListShow(&s);
	SeqListModify(&s, 0, 0);
	SeqListShow(&s);
}

int main()
{
	TestOne();
	return 0;
}