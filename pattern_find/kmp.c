#include "kmp.h"
#include "sstring.h"
#include <stdlib.h>
//模式匹配
int kmp(sstring s, sstring p){

	int i = 0, j = 0;
	int s_len = size(s);
	int p_len = size(p);
	int res = -1;
	int* next = getnext(p);
	int* nextval = getnextval(next,p,p_len);
	while (i < s_len)
	{

		if (j == -1 || s.ch[i] == p.ch[j])
		{
			++i; ++j;
		}
		else
		{
			j = nextval[j];
		}

		if (j == p_len)
		{
			res = i - p_len;
			break;
		}

	}
	free(next);
	free(nextval);
	return res;
}

//next数组
int* getnext(sstring p) {

	int len = size(p);
	int* next = (int*)malloc(len * sizeof(int));
	next[0] = -1;
	int k = -1;
	int j = 0;
	while (j < len - 1)
	{
		if (k == -1 || p.ch[j] == p.ch[k])
		{
			++j;
			++k;
			next[j] = k;
		}
		else
		{
			k = next[k];
		}
	}
	return next;
}

//nextval数组
int* getnextval(int* next,sstring p,int len) {
	
	int* nextval = (int*)malloc(len * sizeof(int));
	int i = 1, k = 1;
	nextval[0] = -1;
	while (i<len)
	{
		if (next[k]==-1 || p.ch[i] != p.ch[next[k]]) {
			nextval[i++] = next[k++];
		}
		else
		{
			k = next[k];
		}
	}
	return nextval;
}

