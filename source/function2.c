#include<stdio.h>
#include<stdlib.h>

int determine(int a, int b)
{
	if (a == 1 && b == 3)
	{
		printf("\t���a���\n");
		return 0;
	}
	if (a == 3 && b == 1)
	{
		printf("\t�q�����\n");
		return 0;
	}
	if (a > b)
		printf("\t���a���\n");
	if (a < b)
		printf("\t�q�����\n");
	if (a == b)
		printf("\t����\n");

}