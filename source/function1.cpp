#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int computer()
{
	char shape[4] = { '0','∞≈§M','•€¿Y','•¨' };
	int i;
	srand(time(NULL));
	i = 1+rand()%3;
	printf("%s",shape[i]);
	return 1;
}