#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int BTDataType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

typedef BTNode* QDataType;

typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;

}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;

}Queue;

//��ʼ��
void QueueInit(Queue* pq);

//����
void QueueDestroy(Queue* pq);

//����
void QueuePush(Queue* pq, QDataType x);

//ɾ��
void QueuePop(Queue* pq);

//����ͷ
QDataType QueueFront(Queue* pq);

//����β
QDataType QueueBack(Queue* pq);

//����
int QueueSize(Queue* pq);

//ͷ�Ƿ�Ϊ��
bool QueueEmpty(Queue* pq);

//��ӡ
void QueuePrint(Queue* pq);
