#include "sstring.h"
//��ʼ���ַ���
void init(sstring* s) {
	s->ch = (char*)malloc(100 * sizeof(char));
}
//��ȡ�ַ�������
int size(sstring s) {

	int i = 0;
	while (s.ch[i]!='\0')
	{ 
		i++;
	}
	return i;
}