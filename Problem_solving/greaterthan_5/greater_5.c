/*
 * Abdelazim ahmed
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 0;
	printf("Enter a value\n");
	fflush(stdin);fflush(stdout);  // for Eclipse
	scanf("%d", &x);
	for (;x >= 5;)
	{
		printf("greater than 5\n");
		break;
	}
	for (;x < 5;)
	{
		printf("lower than 5\n");
		break;
	}
	return 0;
}

