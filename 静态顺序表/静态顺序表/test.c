#define _CRT_SECURE_NO_WARNINGS   1
#include"SeqList.h"

void TestOne()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 2);
	SeqListPushFront(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushFront(&s, 1);
	SeqListShow(&s);
	SeqListPopBack(&s);
	SeqListPopFront(&s);
	SeqListShow(&s);
	int pos=SeqListSearch(&s, 1);
	if (pos == -1)
	{
		printf("您查找的数字不存在\n");
	}
	else
	{
		printf("您要查找的数字的下标为%d \n", pos);
	}
	SeqListModify(&s, 1, 9);
	SeqListShow(&s);
}

int main()
{
	TestOne();
	return 0;
}