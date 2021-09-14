#include<stdio.h>
#include<malloc.h>
#include<assert.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType  *_a;//��̬���ٵĶ�̬����
	size_t _size;//��Ч���ݸ���
	size_t _capacity;//�����ռ�Ĵ�С
}SeqList;

//��ʼ��
void SeqListInit(SeqList *seq);
//�ͷ�
void SeqListDestory(SeqList *seq);

//��ӡ
void SeqListShow(SeqList *seq);

//�������
void SeqListCherk(SeqList *seq);

//ͷ��
void SeqListPushFront(SeqList *seq, SLDataType x);
//β��
void SeqListPushBack(SeqList *seq, SLDataType x);

//ͷɾ
void SeqListPopFront(SeqList *seq);
//βɾ
void SeqListPopBack(SeqList *seq);

//����
int SeqListSearch(SeqList *seq, SLDataType x);

//�޸�
void SeqListModify(SeqList *seq, int pos, SLDataType x);
