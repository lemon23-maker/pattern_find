#ifndef sstring_h
#define sstring_h
typedef struct sstring {

	char* ch;
	
}sstring;


//初始化字符串
void init(sstring* s);
//获取字符串长度
int size(sstring s);
#endif 