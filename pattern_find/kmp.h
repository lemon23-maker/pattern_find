
#include "sstring.h"

//ģʽƥ��
int kmp(sstring s, sstring p);

//next����
int* getnext(sstring p);

//nextval����
int* getnextval(int *next, sstring p, int len);