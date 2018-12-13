#include<stdio.h>
#include<stdlib.h>

int reset(int b[]);
int binarySearch(int b[], int low, int high, int key);

int main()
{
	int i, j;
	int key;
	int a[10] = { 0 };
	printf("請輸入10個數字:");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	while (1)
	{
		reset(&a);
		printf("The reset array is:");
		printf("\n");
		for (i = 0; i < 10; i++)
		{
			printf("%d\t", a[i]);
		}
		printf("\n請輸入一個Key:");
		scanf_s("%d", &key);
		j = binarySearch(a, 0, 9, key);
		if (j == -1)
		{
			printf("\nThe key is not found.\n");
		}
		else
		{
			printf("\nThe key is loacated at:array[%d]", j);
		}
	}
	system("pause");
}

int reset(int b[])
{
	int i, j, temp;
	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (b[i] > b[j])
			{
				temp = b[j];
				b[j] = b[i];
				b[i] = temp;
			}
		}
	}

}

int binarySearch(int b[], int low, int high, int key)
{
	int mid;
	mid = (low + high) / 2;
	while (low <= high)
	{
		if (b[mid] == key)
		{
			return mid;
		}
		else if (b[mid] < key)
		{
			return binarySearch(b, mid + 1, high, key);
		}
		else
		{
			return binarySearch(b, low, mid - 1, key);
		}
	}
	return -1;
}
