
#pragma warning(disable:4996)
#include <stdio.h>
#define true 1
#define false 0
#define MAXNUM  20 
 

void order(int a[],int n)
{
	int p,i,tmp;
	for (p = 1; p < n; p++)
	{
		tmp = a[p];
		for (i = p; i > 0 && a[i - 1] > tmp; i--)
			a[i] = a[i - 1];
		a[i] = tmp;
	}
}
//插入排序法。总体思路就是从头一点一点向前插入嘛。先把第一个记下来，
//后面的那下如果比我大就向前覆盖，之后p再加上一，后面的就能一直覆盖了。

int main()
{
	int i;
	int a[5];
	int n = 5;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	order(a, 5);
	printf("下面打印插入后的函数噻\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}