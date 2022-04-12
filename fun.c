#include"head.h"
st* mallocc(int n) {   //���ٿռ�
	st* p = (st*)malloc(sizeof(st));  //����һ�����ݣ�����һ��ռ�
	if (p != NULL) {
		p->x = n;
		p->next = NULL;
		return p;
	}
	else {
		exit(0);
	}
}
st* find(st** pphead, int n) {  //����
	st* t = *pphead;
	while (t != NULL) {
		if (t->x == n) {
			return t;   //���ص�ǰ�ڵ�ĵ�ַ
		}
		t = t->next;
	}
	return NULL;
}
void suijiin(st** pphead,st* pos,int n){  //�������
	st* p = mallocc(n);
	if ((*pphead)->next == NULL) {  //���ֻ��һ���ڵ�,���൱��ͷ��
		p->x = n;
		p->next = *pphead;
		*pphead = p;
	}
	else {
		st* t = *pphead;
		while (t->next != pos) {
			t = t->next;
		}
		//��ʱ��tָ��pos֮ǰ�Ľڵ�
		t->next = p;
		p->next = pos;
	}
}
void suijidate(st** pphead, st* pos) {  //ɾ��pos��ַ�Ľڵ�
	if (*pphead == NULL) {
		exit(0);
	}
	else if ((*pphead)->next == NULL) {  //���ֻ��һ���ڵ�
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
	st* p = mallocc(n);  //����һ�����ݣ�����һ��ռ�
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
void headin(st** pphead, int n) {  //ͷ��
	st* p = (st*)malloc(sizeof(st));
	if (p != NULL) {
		p->x = n;
		p->next = *pphead;
		//�������ͷ���ݸ�Ϊ�ÿռ�
		*pphead = p;
	}
	else {
		exit(0);
	}
}
void enddate(st** pphead) {  //βɾ  free�����һ���ڵ㣬����֮ǰһ���ڵ��next��ΪNULL
	//1.��û�нڵ�ʱ
	//2.��ֻ��һ���ڵ�ʱ
	//3.���ж���ڵ�ʱ
	if (*pphead == NULL) {
		return;
	}
	else if ((*pphead)->next == NULL) {  //ֻ��һ���ڵ�����
		free(*pphead);
		*pphead = NULL;
	}
	else {
		st* tail = *pphead;
		st* p = NULL;
		while (tail->next != NULL) {
			p = tail;     //ÿ��һ��ѭ������һ��ֵ����tail��ַ����nextΪ��ʱ��������ѭ������ʱ��p��ָ��ǰһ���ڵ�
			tail = tail->next;
		}
		free(tail); //free��tail��ַ��ָ����ǿ�ռ�
		p->next = NULL;
	}
}
void headdate(st** pphead) {  //ͷɾfree��ͷ�ڵ㣬������һ���ڵ���Ϊͷ�ڵ�
	st* p = (*pphead)->next;
	free(*pphead);
	*pphead = p;  //����һ���ڵ�ĵ�ַ����ָ��ͷ�ڵ��ָ�����
}
void print(st* pphead) {
	st* cur = pphead;
	while (cur != NULL) {
		printf("%d-->", cur->x);
		cur = cur->next;  //����һ�����ٵĿռ���׵�ַ����cur����ʱ��cur��ָ����һ���ռ�
	}
	printf("NULL\n");
}