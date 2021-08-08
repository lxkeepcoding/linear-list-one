#define _CRT_SECURE_NO_WARNINGS   1

#include"SeqList.h"


//��ʼ��������
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

//��ӡ����
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

//����Ƿ���Ҫ����
void SeqCheckCapacity(SeqList *pq)
{
	assert(pq);

	//�ж��Ƿ����ˡ���Ҫ����
	if (pq->capacity == pq->size)
	{
		int newcapacity = pq->capacity == 0 ? 4 : pq->capacity * 2;//��ֹ��Զ��0
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



//1.ͷ��β�塢ͷɾβɾ
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


//�м���롢ɾ��
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




//����
void SeqListFind(SeqList *pq, SeqDataType x)
{
	assert(pq);

	int i = 0;
	int n = 0;
	for (i = 0; i < pq->size; ++i)//�п����ж��x
	{
		if (pq->a[i] == x)
			printf("����Ҫ���ҵ�ֵ��λ��Ϊ %d \n", i);
		n++;
	}
	if (n == 0)
	{
		printf("û���ҵ���ֵ\n");
	}
	else
	{
		printf("��ֵ������ %d ��\n", n);
	}
	
}



//�޸�
void SeqListModify(SeqList *pq, int pos, SeqDataType x)
{
	assert(pq);
	assert(pos >= 0 && pos <= pq->size);

	pq->a[pos] = x;
}

