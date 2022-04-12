#include"head.h"
st* mallocc(int n) {   //开辟空间
	st* p = (st*)malloc(sizeof(st));  //存入一个数据，开辟一块空间
	if (p != NULL) {
		p->x = n;
		p->next = NULL;
		return p;
	}
	else {
		exit(0);
	}
}
st* find(st** pphead, int n) {  //查找
	st* t = *pphead;
	while (t != NULL) {
		if (t->x == n) {
			return t;   //返回当前节点的地址
		}
		t = t->next;
	}
	return NULL;
}
void suijiin(st** pphead,st* pos,int n){  //随机插入
	st* p = mallocc(n);
	if ((*pphead)->next == NULL) {  //如果只有一个节点,则相当于头插
		p->x = n;
		p->next = *pphead;
		*pphead = p;
	}
	else {
		st* t = *pphead;
		while (t->next != pos) {
			t = t->next;
		}
		//这时的t指向pos之前的节点
		t->next = p;
		p->next = pos;
	}
}
void suijidate(st** pphead, st* pos) {  //删除pos地址的节点
	if (*pphead == NULL) {
		exit(0);
	}
	else if ((*pphead)->next == NULL) {  //如果只有一个节点
		free(*pphead);
	}
	else {
		st* t = *pphead;
		while (t->next != pos) {
			t = t->next;
		}
		t->next = pos->next;
		free(pos);
	}
}
void endin(st** pphead, int n) {
	st* p = mallocc(n);  //存入一个数据，开辟一块空间
	if (*pphead == NULL) {
			*pphead = p;
	}else {
		st* t = *pphead;
		while (t->next != NULL) {
			t = t->next;
		 }
		t->next = p;
	}
}
void headin(st** pphead, int n) {  //头插
	st* p = (st*)malloc(sizeof(st));
	if (p != NULL) {
		p->x = n;
		p->next = *pphead;
		//将链表的头数据改为该空间
		*pphead = p;
	}
	else {
		exit(0);
	}
}
void enddate(st** pphead) {  //尾删  free掉最后一个节点，并把之前一个节点的next至为NULL
	//1.当没有节点时
	//2.当只有一个节点时
	//3.当有多个节点时
	if (*pphead == NULL) {
		return;
	}
	else if ((*pphead)->next == NULL) {  //只有一个节点的情况
		free(*pphead);
		*pphead = NULL;
	}
	else {
		st* tail = *pphead;
		st* p = NULL;
		while (tail->next != NULL) {
			p = tail;     //每进一次循环，赋一次值，当tail地址处的next为空时，不进入循环，此时的p就指向前一个节点
			tail = tail->next;
		}
		free(tail); //free掉tail地址处指向的那块空间
		p->next = NULL;
	}
}
void headdate(st** pphead) {  //头删free掉头节点，并将下一个节点至为头节点
	st* p = (*pphead)->next;
	free(*pphead);
	*pphead = p;  //将下一个节点的地址赋给指向头节点的指针变量
}
void print(st* pphead) {
	st* cur = pphead;
	while (cur != NULL) {
		printf("%d-->", cur->x);
		cur = cur->next;  //将下一个开辟的空间的首地址赋给cur，这时的cur就指向下一个空间
	}
	printf("NULL\n");
}