#define _CRT_SECURE_NO_WARNINGS   1
#include"SeqList.h"

//��ʼ��
void SeqListInit(SeqList *seq)
{
	seq->_size = 0;
}

//��ӡ
void SeqListShow(SeqList *seq)
{
	for (int i = 0; i < seq->_size; i++)
	{
		printf("%d  ", seq->_a[i]);
	}
	printf("\n");
}

//ͷ��
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
//β��
void SeqListPushBack(SeqList *seq, SLDataType x)
{
	if (seq->_size >= N)
	{
		return;
	}
	seq->_a[seq->_size] = x;
	seq->_size++;
}

//ͷɾ
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
//βɾ
void SeqListPopBack(SeqList *seq)
{
	if (seq->_size == 0)
	{
		return;
	}
	seq->_size--;
}

//����
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



//�޸�
void SeqListModify(SeqList *seq, int pos,SLDataType x)
{
	if (pos >= 0 && pos < seq->_size)
	{
		seq->_a[pos] = x;
	}
	else
	{
		printf("��λ�ò�����\n");
	}
}