/*******************************************************************************************
����Ϊ����������㷨��������Ϊ������
������ͷָ��Ϊ������ͷָ��ָ��ͷ�ڵ㣬ͷ�ڵ�ָ���׽ڵ㣬�Դ����ƣ�ֱ��β�ڵ㡣
ͷ�ڵ��в�������ݣ�ֻ���ָ���׽ڵ��ָ�롣
����ͷ�ڵ��Ŀ����Ϊ�˷��������Ĳ��������������ͷ�ڵ㣬����ֱ����ͷ�ڵ�ָ���׽ڵ㣬
�����ڶ�ͷָ���Ľڵ���в���ɾ������ʱ�ͻ��������ڵ���иò���ʱ������ͬ����Ҫ��Ϊһ�����������������
***********************************************************************************************/

/*
data:20191205
author:caipuguang
GitHub:https://github.com/CPG123456
*/

# include<stdio.h>
# include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node *pNext;
} NODE, *PNODE;

PNODE create_list();

int main(void) {
	return 0;
}

/*
����һ������������ͷָ��
*/
PNODE create_list()
{
	int val;
	PNODE pHead = (PNODE)malloc(sizeof(NODE));
	PNODE pCurrent = pHead;
	if (NULL == pHead)
	{
		printf("pHead malloc failed!");
		exit(-1);
	}
	printf("Input first data(q to quit):");
	while (scanf("%d",  &val)==1)
	{
		PNODE pNew = (PNODE)malloc(sizeof(NODE));
		if (NULL == pNew)
		{
			printf("pNew malloc faild!");
			exit(-1);
		}
		pNew->data = val;
		pCurrent->pNext = pNew;
		pNew->pNext = NULL;
		pCurrent = pNew;
		printf("Input next data(q to quit):")
	}
	return pHead;
}