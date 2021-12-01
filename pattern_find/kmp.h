
#include "sstring.h"

//模式匹配
int kmp(sstring s, sstring p);

//next数组
int* getnext(sstring p);

//nextval数组
int* getnextval(int *next, sstring p, int len);