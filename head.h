#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#pragma once
struct st {
	int x;
	struct st* next;   //next用来指向下一个struct类型的首地址
};
typedef struct st st;  //将结构体类型struct st重命名为st
//函数声明
//开辟空间
st* mallocc(int n);
 //尾插 头插 尾删 头删
//改变链表的头指针，传二级指针，及指针变量的地址
void endin(st** pphead,int n);  
void headin(st** pphead, int n); 
void enddate(st** pphead);
void headdate(st** pphead);
//随机插入/删除
void suijiin(st** pphead,st* pos,int n);  //在pos的前面插入n
void suijidate(st** pphead,st* pos);   //删除pos节点
//查找
st* find(st** pphead, int n);

void print(st* head);  //打印链表