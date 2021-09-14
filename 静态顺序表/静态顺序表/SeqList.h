

#include<stdio.h>


#define N 100
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType _a[N];
	size_t _size;
}SeqList;


//��ʼ��
void SeqListInit(SeqList *seq);

//��ӡ
void SeqListShow(SeqList *seq);

//ͷ��
void SeqListPushFront(SeqList *seq,SLDataType x);
//β��
void SeqListPushBack(SeqList *seq, SLDataType x);

//ͷɾ
void SeqListPopFront(SeqList *seq);
//βɾ
void SeqListPopBack(SeqList *seq);

//����
int SeqListSearch(SeqList *seq, SLDataType x);

//�޸�
void SeqListModify(SeqList *seq, int pos,SLDataType x);