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
	printf("******** 欢迎来到数据结构 **********\n");
	printf("************************************\n");
	printf("*********    1.头插      ***********\n");
	printf("*********    2.尾插      ***********\n");
	printf("*********    3.头删      ***********\n");
	printf("*********    4.尾删      ***********\n");
	printf("*********    5.中间插入  ***********\n");
	printf("*********    6.中间删除  ***********\n");
	printf("*********    7.查找      ***********\n");
	printf("*********    8.修改      ***********\n");
	printf("*********    9.打印      ***********\n");
	printf("*********    0.退出      ***********\n");
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
		printf("请作出选择\n");
		scanf("%d", &option);
		int x;
		int pos1;
		switch (option)
		{
		case PUSHFRONT:
			printf("请输入数据，以-1结束\n");
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
			printf("请输入数据，以-1结束\n");
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
			printf("请输入要增加的位置和值\n");
			scanf("%d %d", &pos1, &x);
			SeqListInsert(&s, pos1, x);
			break;
		case ERASE:
			printf("请输入要删除的值的位置\n");
			scanf("%d", &pos1);
			SeqListErase(&s, pos1);
			break;
		case FIND:
			printf("请输入要查找的值\n");
			scanf("%d", &x);
			SeqListFind(&s, x);
			break;
		case MODIFY:
			printf("请输入你要修改的值的位置和值\n");
			scanf("%d %d",&pos1, &x);
			SeqListModify(&s, pos1, x);
			break;
		case PRINT:
			printf("\n");
			printf("**************************************\n");
			printf("************ 打印数据如下 ************\n");
			printf("**************************************\n");
			SeqListPrint(&s);
			printf("**************************************\n");
			printf("**************************************\n");
			printf("**************************************\n");
			printf("\n");
			break;
		case EXIT:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
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
