#include<stdio.h>
#include<stdlib.h>

int Maximum(int *a[]);
int size;

int main()
{
	int i;
	int j;
	int get;
	int Max[100];
	printf("請問你要輸入幾個數字:");
	scanf_s("%d", &size);

	printf("請輸入一些數字到陣列中:");
	for (i = 0; i < size; i++)
	{
		scanf_s("%d", &Max[i]);
	}
	j = Maximum(&Max);
	printf("此陣列中最大的數是:%d\n", j);
	system("pause");
}
int Maximum(int *a[])
{
	int i;
	int big = 0;
	for (i = 0; i < size; i++)
	{
		if (a[i] > big)
		{
			big = a[i];
		}
	}
	return big;
}