//链表的本质是，插入一个数据，创建一块空间
#include"head.h"
int main() {
	st* phead = NULL;   //phead用来指向第一个节点的空间，没有元素，不开辟空间
	st* p = NULL;
	st* p2 = NULL;
	endin(&phead, 2);   //尾插
	endin(&phead, 3);   //尾插
	headin(&phead, 1);  //头插
	endin(&phead, 4);   //尾插
	//enddate(&phead);  //尾删
	//headdate(&phead); //头删
	if ((p = find(&phead, 3)) != NULL) {  //找到要删除的数据的节点的地址
		suijiin(&phead, p, 2);
	}
	if ((p2 = find(&phead, 4)) != NULL) {  //找到要删除的数据的节点的地址
		suijidate(&phead, p2);
	}

	print(phead);
	return 0;
}