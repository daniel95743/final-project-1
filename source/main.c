#include<stdio.h>
#include<stdlib.h>
#include<Header.h>

int main(void)
{
	int number,j=0;
		printf("------------�q���C��------------\n");
		printf("�п�J�Ʀr( 1.�ŤM 2.���Y 3.��)");
		scanf_s("%d", &number);
		printf("\n\n");
		user(number);
		computer(number);
		printf("�O�_�n�~��C���H");
		scanf_s("%d",&j);
		if (j == 1)
		{
			while (j ==1)
			{
				printf("------------�q���C��------------\n");
				printf("�п�J�Ʀr( 1.�ŤM 2.���Y 3.��)");
				scanf_s("%d", &number);
				printf("\n\n");
				user(number);
				computer(number);
				printf("�O�_�n�~��C���H");
				scanf_s("%d", &j);
			}
		}
		
	system("pause");
	return 0;
}