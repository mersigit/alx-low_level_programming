#include "main.h"

/**
 * positive_or_negative - this function checkes the number sign
 * description: this funct takes one argument
 * @i: i type number
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
