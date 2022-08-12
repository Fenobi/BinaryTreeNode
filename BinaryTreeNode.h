#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "Queue.h"

//����������
void TreeDestroy(BTNode* root);

//�������
void TreeSize(BTNode* BT, int* psize);
int BinaryTreeSize(BTNode* root);

//Ҷ�ӽڵ����
int TreeLeafSize(BTNode* root);

//���ĸ߶�
int TreeHeight(BTNode* root);

//��k��ڵ����
int TreeLevelKSize(BTNode* root, int k);

//����ֵΪk�Ľڵ�
BTNode* TreeFind(BTNode* root, BTDataType x);

//ǰ�����
void PreOrder(BTNode* BT);

//�������
void MidOrder(BTNode* BT);

//�������
void PostOrder(BTNode* BT);

//�������
void TreeLevelOrder(BTNode* root);

//�ж϶������Ƿ�Ϊ��ȫ������
int TreeComplete(BTNode* root);

