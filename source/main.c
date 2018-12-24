#include<stdio.h>
#include<stdlib.h>
#include<Header.h>

int main(void)
{
	int number,j=0;
		printf("------------猜拳遊戲------------\n");
		printf("請輸入數字( 1.剪刀 2.石頭 3.布)");
		scanf_s("%d", &number);
		printf("\n\n");
		user(number);
		computer(number);
		printf("是否要繼續遊戲？");
		scanf_s("%d",&j);
		if (j == 1)
		{
			while (j ==1)
			{
				printf("------------猜拳遊戲------------\n");
				printf("請輸入數字( 1.剪刀 2.石頭 3.布)");
				scanf_s("%d", &number);
				printf("\n\n");
				user(number);
				computer(number);
				printf("是否要繼續遊戲？");
				scanf_s("%d", &j);
			}
		}
		
	system("pause");
	return 0;
}