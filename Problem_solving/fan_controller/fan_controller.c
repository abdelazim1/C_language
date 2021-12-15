/*
 ============================================================================
 Name        : fan_controller.c
 Author      : Abdelazim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

uint8_t flag = 0;
int fan_cont(int temp)
{
	if (temp < 30)
	{
		flag = 0;
		return 0;			//turn off the fan
	}
	else if (temp >= 30 && temp <= 60)
	{
		if (flag == 0)		//this mean that fan was off so it will remain off
			return 0;
		else
			return 1;		// this mean that fan was on(previous temp's value so it will remain on
	}
	else
	{
		flag = 1;
		return 1;
	}
	return 0;
}
int main(void) {
	int temp[8] = {20,30,40,60,70,45,20,45};
	for (int i= 0;i < 8; i++)
	{
		bool x = fan_cont(temp[i]);
		printf(x ? "on\n" : "off\n");
	}

	return 0;
}
