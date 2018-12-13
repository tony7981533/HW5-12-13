#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rollDice();

int main()
{
	int i,k,j;
	int sum;
	int point[11] = {0};
	srand(time(NULL));
	for (i = 0; i < 36000; i++)
	{
		sum = rollDice();
		for (j = 2; j <= 12; j++)
		{
			if (j == sum)
				point[j-2] =point[j-2] + 1;
		}		
	}
	for (k = 2; k <= 12; k++)
	{
		printf("%2d點出現次數為%d\n",k,point[k-2]);
	}
	system("pause");
	return 0;
}

int rollDice()
{
	int die1;
	int die2;
	int workSum;
	die1 = 1 + (rand()%6);
	die2 = 1 + (rand()%6);
	workSum = die1 + die2;
	return workSum;
}