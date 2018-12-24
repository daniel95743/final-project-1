#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int computer(int number)
{
	int i;
	srand(time(NULL));
	i = 1 + rand()% 3;
	printf("πq∏£°G");
	switch (i)
	{
	case 1:
		printf("∞≈§M");
		break;
	case 2:
		printf("•€¿Y");
		break;
	case 3:
		printf("•¨");
		break;
	default:
		break;
	}
	printf("\n");
	determine(number,i);

}
