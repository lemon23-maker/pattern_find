#include "sstring.h"
//初始化字符串
void init(sstring* s) {
	s->ch = (char*)malloc(100 * sizeof(char));
}
//获取字符串长度
int size(sstring s) {

	int i = 0;
	while (s.ch[i]!='\0')
	{ 
		i++;
	}
	return i;
}