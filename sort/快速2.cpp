#include<stdio.h>
#define num 3
void ex(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}
int part(int a[], int i, int j)
{
	int p = a[i];
	while (i < j)
	{
		while (i<j&&a[j]>p)--j;
		ex(a[i], a[j]);
		while (i < j&&a[i] < p)++i;
		ex(a[i], a[j]);
	}
	return i;
}
void sort(int a[], int i, int j)
{
	int p = part(a, i, j);
	sort(a, i, p - 1);
	sort(a, p + 1, j);
}
void quicksort(int a)
{
	sort(a, 0, num);
}
void main()
{
	int a[num];
	for (int i = 0;i < num;i++)
		scanf_s("%d", &a[i]);
	quicksort(a);
	for (int i = 0;i < num;i++)
		printf("%d", a[i]);
}