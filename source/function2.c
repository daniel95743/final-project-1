#include<stdio.h>
#include<stdlib.h>

int determine(int a, int b)
{
	if (a == 1 && b == 3)
	{
		printf("\t玩家獲勝\n");
		return 0;
	}
	if (a == 3 && b == 1)
	{
		printf("\t電腦獲勝\n");
		return 0;
	}
	if (a > b)
		printf("\t玩家獲勝\n");
	if (a < b)
		printf("\t電腦獲勝\n");
	if (a == b)
		printf("\t平手\n");

}