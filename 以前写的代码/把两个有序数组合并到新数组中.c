//功能描述：把两个有序数组合并到新数组中，并保持新数组也是有序�?
//参数描述�?
//a：整型数组，包含n个元素，由大到小排序
//b：整型数组，包含m个元素，由大到小排序
//c：整型数组，用于存放合并后的元素，由大到小排�?
#include <stdio.h>
void bubbleSort(int x[], int n);
void merge(int a[], int b[], int c[], int n, int m);
int a[5] = {
	82, 77, 50, 62, 91},
	b[3] = {81, 72, 93}, c[8];
int main()
{
	int i;
	bubbleSort(a, 5);
	for (i = 0; i < 5; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
	bubbleSort(b, 3);
	for (i = 0; i < 3; i++)
	{
		printf("%3d", b[i]);
	}
	printf("\n");
	merge(a, b, c, 5, 3);
	for (i = 0; i < 8; i++)
		printf("%3d", c[i]);

	return 0;
}
//合并数组
void merge(int a[], int b[], int c[], int n, int m)
{
	int i = 0, j = 0, k = 0;

	while (i < m && j < n)
	{
		if (a[i] < b[j])
			c[k++] = b[j++];
		else
			c[k++] = a[i++];
	}

	while (i < m)
		c[k++] = a[i++];

	while (j < n)
		c[k++] = b[j++];
}
//用冒泡排序算法对一组数组由小到大排�?
void bubbleSort(int x[], int n)
{
	int i, j, t;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (x[j] < x[j + 1])
			{
				t = x[j + 1];
				x[j + 1] = x[j];
				x[j] = t;
			}
		}
	}
}