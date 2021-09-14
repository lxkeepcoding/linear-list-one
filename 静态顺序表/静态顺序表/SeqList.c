#define _CRT_SECURE_NO_WARNINGS   1
#include"SeqList.h"

//初始化
void SeqListInit(SeqList *seq)
{
	seq->_size = 0;
}

//打印
void SeqListShow(SeqList *seq)
{
	for (int i = 0; i < seq->_size; i++)
	{
		printf("%d  ", seq->_a[i]);
	}
	printf("\n");
}

//头插
void SeqListPushFront(SeqList *seq, SLDataType x)
{
	if (seq->_size >= N)
	{
		return;
	}
	int end= seq->_size - 1;
	while (end >= 0)
	{
		seq->_a[end + 1] = seq->_a[end];
		end--;
	}
	seq->_a[0] = x;
	seq->_size++;
}
//尾插
void SeqListPushBack(SeqList *seq, SLDataType x)
{
	if (seq->_size >= N)
	{
		return;
	}
	seq->_a[seq->_size] = x;
	seq->_size++;
}

//头删
void SeqListPopFront(SeqList *seq)
{
	if (seq->_size == 0)
	{
		return;
	}
	for (int i = 1; i < seq->_size; i++)
	{
		seq->_a[i - 1] = seq->_a[i];
	}
	seq->_size--;
}
//尾删
void SeqListPopBack(SeqList *seq)
{
	if (seq->_size == 0)
	{
		return;
	}
	seq->_size--;
}

//查找
int SeqListSearch(SeqList *seq, SLDataType x)
{
	for (int i = 0; i < seq->_size; i++)
	{
		if (seq->_a[i] == x)
		{
			return i;
		}
	}
	return -1;
}



//修改
void SeqListModify(SeqList *seq, int pos,SLDataType x)
{
	if (pos >= 0 && pos < seq->_size)
	{
		seq->_a[pos] = x;
	}
	else
	{
		printf("该位置不存在\n");
	}
}