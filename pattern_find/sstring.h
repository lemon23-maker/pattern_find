#ifndef sstring_h
#define sstring_h
typedef struct sstring {

	char* ch;
	
}sstring;


//��ʼ���ַ���
void init(sstring* s);
//��ȡ�ַ�������
int size(sstring s);
#endif 