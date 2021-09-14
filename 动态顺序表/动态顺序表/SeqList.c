#define _CRT_SECURE_NO_WARNINGS   1

#include"SeqList.h"

//��ʼ��
void SeqListInit(SeqList *seq)
{
	assert(seq);
	seq->_a = NULL;
	seq->_size = seq->_capacity = 0;
}


//�ͷ�
void SeqListDestory(SeqList *seq)
{
	assert(seq);
	free(seq->_a);
	seq->_a = NULL;
	seq->_size = seq->_capacity = 0;
}

//��ӡ
void SeqListShow(SeqList *seq)
{
	assert(seq);
	for (int i = 0; i < seq->_size; i++)
	{
		printf("%d  ", seq->_a[i]);
	}
	printf("\n");
}

//�������
void SeqListCherk(SeqList *seq)
{
	assert(seq);
	if (seq->_capacity == seq->_size)
	{
		//_capacity�տ�ʼ�п�����0�������0����������Ϊ4���������0������Ϊ2��
		int newcapacity = seq->_capacity == 0 ? 4 : seq->_capacity * 2;
		SLDataType *newA = realloc(seq->_a, sizeof(SLDataType)*newcapacity);
		//��������Ƿ�ʧ��
		if (newA == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		seq->_a = newA;
		seq->_capacity = newcapacity;
	}
}


//ͷ��
void SeqListPushFront(SeqList *seq, SLDataType x)
{
	assert(seq);
	SeqListCherk(seq);
	int end = seq->_size - 1;
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
	assert(seq);
	SeqListCherk(seq);
	seq->_a[seq->_size] = x;
	seq->_size++;
}

//ͷɾ
void SeqListPopFront(SeqList *seq)
{
	assert(seq);
	for (int first = 0; first < seq->_size-1; first++)
	{
		seq->_a[first] = seq->_a[first + 1];
	}
	seq->_size--;
}
//βɾ
void SeqListPopBack(SeqList *seq)
{
	assert(seq);
	seq->_size--;
}

//����
int SeqListSearch(SeqList *seq, SLDataType x)
{
	for (int i = 0; i < seq->_size; i++)
	{
		if (seq->_a[i] == x)
			return i;
	}
	return -1;
}

//�޸�
void SeqListModify(SeqList *seq, int pos, SLDataType x)
{
	if (pos < seq->_size&&pos >= 0)
	{
		seq->_a[pos] = x;
	}
	else
	{
		printf("λ�÷Ƿ�\n");
	}
}
