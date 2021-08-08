#define _CRT_SECURE_NO_WARNINGS   1

#include"SeqList.h"

//void TestSeqList1()
//{
//	SeqList s;
//
//	SeqListInit(&s);
//
//	SeqListPushBack(&s, 1);
//	SeqListPushBack(&s, 2);
//	SeqListPushBack(&s, 3);
//	SeqListPushBack(&s, 4);
//	SeqListPushBack(&s, 5);
//	SeqListPushBack(&s, 6);
//
//
//	SeqListPushFront(&s, 0);
//	SeqListPushFront(&s, 0);
//	SeqListPushFront(&s, 0);
//	SeqListPushFront(&s, 0);
//	SeqListPushFront(&s, 0);
//	
//
//	SeqListPopBack(&s);
//	SeqListPrint(&s);
//	SeqListPopBack(&s);
//	SeqListPrint(&s);
//	SeqListPopBack(&s);
//	SeqListPrint(&s);
//
//	SeqListPopFront(&s);
//	SeqListPrint(&s);
//	SeqListPopFront(&s);
//	SeqListPrint(&s);
//	SeqListPopFront(&s);
//	SeqListPrint(&s);
//
//	SeqListDeatroy(&s);
//}
//
//void SeqListTest2()
//{
//	SeqList s;
//
//	SeqListInit(&s);
//
//	SeqListPushBack(&s, 1);
//	SeqListPushBack(&s, 2);
//	SeqListPushBack(&s, 3);
//	SeqListPushBack(&s, 4);
//	SeqListPushBack(&s, 5);
//	SeqListPushBack(&s, 6);
//	SeqListPrint(&s);
//
//	SeqListInsert(&s,4,8);
//	SeqListPrint(&s);
//
//	SeqListErase(&s,3);
//    SeqListPrint(&s);
//
//	SeqListModify(&s, 2, 9);
//	SeqListPrint(&s);
//
//
//	SeqListDeatroy(&s);
//}

enum
{
	EXIT,
	PUSHFRONT,
	PUSHBACK,
	POPFRONT,
	POPBACK,
	INSERT,
	ERASE,
	FIND,
	MODIFY,
	PRINT
};

void menu()
{
	printf("\n");
	printf("\n");
	printf("\n");
	printf("************************************\n");
	printf("******** ��ӭ�������ݽṹ **********\n");
	printf("************************************\n");
	printf("*********    1.ͷ��      ***********\n");
	printf("*********    2.β��      ***********\n");
	printf("*********    3.ͷɾ      ***********\n");
	printf("*********    4.βɾ      ***********\n");
	printf("*********    5.�м����  ***********\n");
	printf("*********    6.�м�ɾ��  ***********\n");
	printf("*********    7.����      ***********\n");
	printf("*********    8.�޸�      ***********\n");
	printf("*********    9.��ӡ      ***********\n");
	printf("*********    0.�˳�      ***********\n");
	printf("************************************\n");
	printf("************************************\n");
	printf("************************************\n");
	printf("\n");
	printf("\n");
	printf("\n");
}

void Test()
{
	SeqList s;
	SeqListInit(&s);
	int option=0;
	do
	{
		menu();
		printf("������ѡ��\n");
		scanf("%d", &option);
		int x;
		int pos1;
		switch (option)
		{
		case PUSHFRONT:
			printf("���������ݣ���-1����\n");
			while (1)
			{
				scanf("%d", &x);
				if (x == -1)
				{
					break;
				}
				else
				{ 
					SeqListPushFront(&s, x); 
				}
			}
			break;
		case PUSHBACK:
			printf("���������ݣ���-1����\n");
			while (1)
			{
				scanf("%d", &x);
				if (x == -1)
				{
					break;
				}
				else
				{
					SeqListPushBack(&s, x);
				}
			}
			break;
		case POPFRONT:
			SeqListPopFront(&s);
			break;
		case POPBACK:
			SeqListPopBack(&s);
			break;
		case INSERT:
			printf("������Ҫ���ӵ�λ�ú�ֵ\n");
			scanf("%d %d", &pos1, &x);
			SeqListInsert(&s, pos1, x);
			break;
		case ERASE:
			printf("������Ҫɾ����ֵ��λ��\n");
			scanf("%d", &pos1);
			SeqListErase(&s, pos1);
			break;
		case FIND:
			printf("������Ҫ���ҵ�ֵ\n");
			scanf("%d", &x);
			SeqListFind(&s, x);
			break;
		case MODIFY:
			printf("��������Ҫ�޸ĵ�ֵ��λ�ú�ֵ\n");
			scanf("%d %d",&pos1, &x);
			SeqListModify(&s, pos1, x);
			break;
		case PRINT:
			printf("\n");
			printf("**************************************\n");
			printf("************ ��ӡ�������� ************\n");
			printf("**************************************\n");
			SeqListPrint(&s);
			printf("**************************************\n");
			printf("**************************************\n");
			printf("**************************************\n");
			printf("\n");
			break;
		case EXIT:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
		

	} while (option);
	SeqListDeatroy(&s);
}
int main()
{
	//TestSeqList1();
	//SeqListTest2();
	Test();
	return 0;
}
