//����ı����ǣ�����һ�����ݣ�����һ��ռ�
#include"head.h"
int main() {
	st* phead = NULL;   //phead����ָ���һ���ڵ�Ŀռ䣬û��Ԫ�أ������ٿռ�
	st* p = NULL;
	st* p2 = NULL;
	endin(&phead, 2);   //β��
	endin(&phead, 3);   //β��
	headin(&phead, 1);  //ͷ��
	endin(&phead, 4);   //β��
	//enddate(&phead);  //βɾ
	//headdate(&phead); //ͷɾ
	if ((p = find(&phead, 3)) != NULL) {  //�ҵ�Ҫɾ�������ݵĽڵ�ĵ�ַ
		suijiin(&phead, p, 2);
	}
	if ((p2 = find(&phead, 4)) != NULL) {  //�ҵ�Ҫɾ�������ݵĽڵ�ĵ�ַ
		suijidate(&phead, p2);
	}

	print(phead);
	return 0;
}