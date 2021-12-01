#include"sstring.h"
#include "kmp.h"
#include <stdio.h>
#include <string.h>

int main()
{
	sstring s, p;
	init(&s);
	init(&p);
	printf("请输入人的DNA序列和病毒DNA序列\n输入'0'、'0'表示输入结束\n");
	scanf("%s%s", s.ch, p.ch);
	while (!(strcmp(s.ch,"0")==0&& strcmp(p.ch, "0")==0))
	{
		int len = size(p);
		int res1 = kmp(s, p);
		for (int i = 0; i < len/2; i++)
		{
			char t = p.ch[i];
			p.ch[i] = p.ch[len - i - 1];
			p.ch[len - i - 1] = t;
		}		
		int res2 = kmp(s, p);

		if (res1 == -1&& res2==-1) {
			printf("NO");
		}
		else
		{	
			printf("YES");
		}
		printf("\n"); 
		//printf("请输入病毒DNA序列和人的DNA序列\n输入'0'、'0'表示输入结束\n");
		getchar();
		scanf("%s%s", s.ch, p.ch);
	}
	printf("已退出");

}

