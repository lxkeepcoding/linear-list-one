#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>//����




////��̬
//#define N 100
//struct SeqList
//{
//	int a[N];
//	int size;
//};


typedef int SeqDataType;//������������޸�

typedef struct SeqList
{
	SeqDataType *a;
	int size;//��С
	int capacity;//��Ч����
}SeqList;


//��ʼ��������
void SeqListInit(SeqList *pq);
void SeqListDeatroy(SeqList *pq);

//��ӡ����
void SeqListPrint(SeqList *pq);


//���ݽṹ����ɾ��ĵĽӿ�

//1.ͷ��β�塢ͷɾβɾ
void SeqListPushBack(SeqList *pq, SeqDataType x);
void SeqListPushFront(SeqList *pq, SeqDataType x);
void SeqListPopBack(SeqList *pqq);
void SeqListPopFront(SeqList *pq);

//�м���롢ɾ��
void SeqListInsert(SeqList *pq,int pos, SeqDataType x);
void SeqListErase(SeqList *pq,int pos);

//����
void SeqListFind(SeqList *pq, SeqDataType x);

//�޸�
void SeqListModify(SeqList *pq, int pos, SeqDataType x);


