#include <stdio.h>

#include "fun.h"
/*functions definitions*/

/*half pyramid function*/
void half_pyramid(signed char size)
{
	if (size >= 1)
	{
		char counter1 = 1;
		char counter2 = 1;
		for (counter1 = 1; counter1 <= size; counter1++)
		{
			for (counter2 = 1; counter2 <= counter1; counter2++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("please enter a positive integer");
	}
}

/*half pyramid function*/
void inv_half_pyramid(signed char size)
{
	if (size >= 1)
	{
		char counter1 = 1;
		char counter2 = 1;
		for (counter1 = size; counter1 >= 1; counter1--)
		{
			for (counter2 = 1; counter2 <= counter1; counter2++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("please enter a positive integer");
	}
}

/*Full Pyramid Star Pattern */

void full_pyramid2(unsigned int size)
{
	char row_counter = 1;
	char start_place = size;
	char stars_counter = 0; // need to implement this to limit stars after startplace
	char counter_2 = 1;
	char alternator = 1;

	for (row_counter = 1; row_counter <= size; row_counter++)
	{
		alternator = 1;
		stars_counter = 0;
		for (counter_2 = 1; counter_2 <= (2 * size - 1); counter_2++)
		{
			if (stars_counter >= row_counter)
			{
				break;
			}
			if (counter_2 < start_place)
			{
				printf(" "); //still no reached the first * in the pyramid
			}
			else
			{
				if (alternator == 1)
				{
					printf("*");
					alternator = 0;
					stars_counter++;
				}
				else
				{

					printf(" ");
					alternator = 1;
				}
			}
		}
		start_place--;
		printf("\n");


	}
}
void full_pyramid1(unsigned int size)
{
	char row_counter = 1;
	char stars_counter = 0; // need to implement this to limit stars after startplace
	char counter_2 = 1;
	char start_place = size;

	for (row_counter = 1; row_counter <= size; row_counter++)
	{
		stars_counter = 0;
		for (counter_2 = 1; counter_2 <= (start_place - 1); counter_2++)
		{
			printf(" ");// print space until you reach the first spot...
			// where you are going to print *
		}
		while (stars_counter < row_counter)
		{
			printf("* ");
			stars_counter++;
		}
		start_place--;
		printf("\n");


	}
}
/*Inverted Full Pyramid Star Pattern */

void Inv_full_pyramid(unsigned int size)
{
	char row_counter = 1;
	char stars_counter = size; // need to implement this to limit stars after startplace
	char counter_2 = 1;
	char start_place = 1;

	for (row_counter = 1; row_counter <= size; row_counter++)
	{
		stars_counter = size;
		for (counter_2 = 1; counter_2 <= (start_place - 1); counter_2++)
		{
			printf(" ");// print space until you reach the first spot...
			// where you are going to print *
		}
		while (stars_counter >= row_counter)
		{
			printf("* ");
			stars_counter--;
		}
		start_place++;
		printf("\n");
		
	}
}