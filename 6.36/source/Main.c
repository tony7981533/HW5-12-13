#include<stdio.h>
#include<stdlib.h>

char reverse(char a[]);

int main()
{
	char string1[100];
	printf("please input a string:");
	scanf_s("%s", string1, 100);
	reverse(&string1);
	printf(string1);
	printf("\n");
	system("pause");
}
char reverse(char a[])
{
	int i;
	int j = strlen(a) - 1;
	char c;

	for (i = 0, j; i < j; i++, j--)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}
}