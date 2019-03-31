#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include <cmath>//先把头给扔上。

void boxsort(int a[],int n)
{
    int b[n];
    int i,j,k;


}
int main()
{
	int i;
	int a[5];
	int n = 5;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	boxsort(a, 5);
	printf("下面打印插入后的函数噻\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
