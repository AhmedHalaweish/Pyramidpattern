#include <stdio.h>

#include "fun.h"
/*functions definitions*/

/*Hollow Full Pyramid Star Pattern*/

void hollow_full_pyramid(unsigned int size)
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
			if (row_counter != size){
				if (0==stars_counter || (row_counter-1)==stars_counter){
					printf("* ");
				}
				else {
					printf("  ");
				}
			}
			else {
				printf("* ");
			}
			stars_counter++;
		}
		start_place--;
		printf("\n");


	}
}

/*Inverted Half pyramid function*/

void inv_hollow_half_pyramid(signed char size)
{
	if (size >= 1)
	{
		char row_counter = 1;
		char counter2 = 1;
		for (row_counter = size; row_counter >= 1; row_counter--)
		{
			for (counter2 = 1; counter2 <= row_counter; counter2++)
			{	
				if (row_counter == size || row_counter == 1) 
				{
					printf("*");
				}
				else
				{
					if(1==counter2 || row_counter ==counter2)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	}
	else
	{
		printf("please enter a positive integer");
	}
}


/*Inverted Hollow Full Pyramid*/
void inv_hollow_full_pyramid(signed char size) 
{
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
				if (row_counter == 1 || row_counter == size) 
				{
					printf("* ");
				}
				else
				{
					if(stars_counter == row_counter || stars_counter == size)
					{
						printf("* ");
					}
					else
					{
						printf("  ");
					}
				}
				stars_counter--;
			}
			start_place++;
			printf("\n");

		}
	}
}
