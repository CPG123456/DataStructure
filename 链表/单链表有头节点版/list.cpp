/*******************************************************************************************
以下为操作链表的算法，该链表为单链表。
链表以头指针为索引，头指针指向头节点，头节点指向首节点，以此类推，直到尾节点。
头节点中不存放数据，只存放指向首节点的指针。
设置头节点的目的是为了方便对链表的操作，如果不设置头节点，而是直接由头节点指向首节点，
这样在对头指针后的节点进行插入删除操作时就会与其他节点进行该操作时有所不同，便要作为一种特殊情况来分析。
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
创建一个链表，并返回头指针
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