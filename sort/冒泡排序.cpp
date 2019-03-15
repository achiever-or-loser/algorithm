#include<stdio.h>
#define NUM 6

void main()
{
	int i, j;
	int a[NUM];
	printf("输入%d个整数:\n", NUM);
	for (i = 0;i<NUM;i++)
	{
		scanf("%d", &a[i]);
	}


	for (i = 1;i<NUM;i++)
	{
		for (j = 0;j<NUM - i;j++)
		{
			if (a[j]<a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0;i<NUM;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
