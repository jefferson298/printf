#include "main.h"
/**
 * putters - The created string
 * @c: Default string
 *
 * Return: The value in bytes
 *
 */
int putters(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			putcharac(c[count]);
		}
	}
	return (count);
}
