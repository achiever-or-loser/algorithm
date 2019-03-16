#include <stdio.h>
void quick(int *a, int i, int j)
{
	int m, n, temp;
	int k;
	m = i;
	n = j;
	k = a[(i + j) / 2]; /*选取的参照*/
	while (m <= n)
	{
		while (a[m]<k&&m<j) m++; /* 从左到右找比k大的元素*/
		while (a[n]>k&&n>i) n--; /* 从右到左找比k小的元素*/
		if (m <= n) { /*若找到且满足条件，则交换*/
			temp = a[m];
			a[m] = a[n];
			a[n] = temp;
			m++;
			n--;
		}
	}
	if (m<j) quick(a, m, j); /*运用递归*/
	if (n>i) quick(a, i, n);
}
void main()
{
	int a[5], i;
	for (i = 0;i<5;i++)
		scanf_s("%d", &a[i]);
	quick(a, 0, 5);
	for (i = 0;i<5;i++)
		printf("%d ", a[i]);
	printf("\n");
}