#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#pragma once
struct st {
	int x;
	struct st* next;   //next����ָ����һ��struct���͵��׵�ַ
};
typedef struct st st;  //���ṹ������struct st������Ϊst
//��������
//���ٿռ�
st* mallocc(int n);
 //β�� ͷ�� βɾ ͷɾ
//�ı������ͷָ�룬������ָ�룬��ָ������ĵ�ַ
void endin(st** pphead,int n);  
void headin(st** pphead, int n); 
void enddate(st** pphead);
void headdate(st** pphead);
//�������/ɾ��
void suijiin(st** pphead,st* pos,int n);  //��pos��ǰ�����n
void suijidate(st** pphead,st* pos);   //ɾ��pos�ڵ�
//����
st* find(st** pphead, int n);

void print(st* head);  //��ӡ����