/*
 ============================================================================
 Name        : bool_greaterthan_5.c
 Author      : Abdelazim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{	int no;
	scanf("%d", &no);
	bool x = no > 5;
	printf(x ? "true" : "false");
	return 0;
}
