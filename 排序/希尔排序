#pragma warning(disable:4996)//针对vs2019写的，不知道别的版本会不会有这个问题
#include <stdio.h>
#define true 1
#define false 0
#define MAXNUM  20 
 

void shellsort(int a[],int n)
{
	int j,i,tmp,increment;
	for (increment = n / 2; increment > 0; increment /= 2)
		for (i = increment; i < n; i++)
		{
			tmp = a[i];
			for (j = i; j >= increment; j -= increment)
			{
				if (tmp< a[j-increment])
					a[j] = a[j - increment];
				else
					break;
			}
			a[j] = tmp;
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
	shellsort(a, 5);
	printf("下面打印插入后的函数噻\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}