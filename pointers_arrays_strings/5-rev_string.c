#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: Empty (output of function)
 */
void rev_string(char *s)
{
	/* a is going to be used for the length */
	int a = 0;

	int b, i;

	/* temp will be the temporary variable used to swap in the for loop */
	char temp;

	while (s[a] < '\0')
	{
		a++;
	}

	/* b is now set to the middle */
	b = a / 2;

	/* i will be the increment for the for loop to swap */

	for (i = 0; i < b; i++)
	{
		temp = s[i];

		s[i] = s[a - i];

		s[a - i] = temp;
	}
}


