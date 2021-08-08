#define _CRT_SECURE_NO_WARNINGS   1

#include"SeqList.h"


//初始化和销毁
void SeqListInit(SeqList *pq)
{
	assert(pq);
	pq->a = NULL;
	pq->capacity = 0;
	pq->size = 0;

}
void SeqListDeatroy(SeqList *pq)
{
	assert(pq);
	free(pq->a);
	pq->a = NULL;
	pq->capacity = 0;
	pq->size = 0;
}

//打印数据
void SeqListPrint(SeqList *pq)
{
	assert(pq);
	int i = 0;
	for (i = 0; i < pq->size; ++i)
	{
		printf("%d  ", pq->a[i]);
	}
	printf("\n");
}

//检查是否需要扩容
void SeqCheckCapacity(SeqList *pq)
{
	assert(pq);

	//判断是否满了。需要增容
	if (pq->capacity == pq->size)
	{
		int newcapacity = pq->capacity == 0 ? 4 : pq->capacity * 2;//防止永远是0
		SeqDataType *newA = realloc(pq->a, sizeof(SeqDataType)*newcapacity);
		if (newA == NULL)
		{
			printf("reallco fail\n");
			exit(-1);
		}
		else
		{
			pq->a = newA;
			pq->capacity = newcapacity;
		}
	}
}



//1.头插尾插、头删尾删
void SeqListPushBack(SeqList *pq, SeqDataType x)
{
	assert(pq);

	SeqCheckCapacity(pq);
	
	pq->a[pq->size] = x;
	pq->size++;
}


void SeqListPushFront(SeqList *pq, SeqDataType x)
{
	assert(pq);

	SeqCheckCapacity(pq);

	int end = pq->size - 1;
	while (end >= 0)
	{
		pq->a[end + 1] = pq->a[end];
		--end;
	}
	pq->a[0] = x;
	pq->size++;
}
void SeqListPopBack(SeqList *pq)
{
	assert(pq);
	assert(pq->size > 0);
	--pq->size;
}
void SeqListPopFront(SeqList *pq)
{
	assert(pq);
	assert(pq->size > 0);
	int begin = 0;
	while (begin < pq->size - 1)
	{
		pq->a[begin] = pq->a[begin + 1];
		++begin;
	}
	--pq->size;
}


//中间插入、删除
void SeqListInsert(SeqList *pq, int pos,SeqDataType x)
{
	assert(pq);
	assert(pos >= 0&&pos<=pq->size);

	SeqCheckCapacity(pq);

	int end = pq->size - 1;
	while (end>=pos)
	{
		pq->a[end + 1] = pq->a[end];
		--end;
	}
	pq->a[pos] = x;
	++pq->size;
}
void SeqListErase(SeqList *pq, int pos)
{
	assert(pq);
	assert(pos >= 0 && pos<pq->size);

	int begin = pos;
	while (begin < pq->size)
	{
		pq->a[begin] = pq->a[begin + 1];
		++begin;
	}
	--pq->size;
}




//查找
void SeqListFind(SeqList *pq, SeqDataType x)
{
	assert(pq);

	int i = 0;
	int n = 0;
	for (i = 0; i < pq->size; ++i)//有可能有多个x
	{
		if (pq->a[i] == x)
			printf("您所要查找的值的位置为 %d \n", i);
		n++;
	}
	if (n == 0)
	{
		printf("没有找到此值\n");
	}
	else
	{
		printf("该值共出现 %d 次\n", n);
	}
	
}



//修改
void SeqListModify(SeqList *pq, int pos, SeqDataType x)
{
	assert(pq);
	assert(pos >= 0 && pos <= pq->size);

	pq->a[pos] = x;
}

