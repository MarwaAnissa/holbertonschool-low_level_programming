/*
 * File: 6-print_line.c
 * Auth: Davis Joseph
 */

#include "main.h"
#include <stdio.h>


/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			putchar('_');
	}

	putchar('\n');
}
