#include <unistd.h>
#include "main.h"

/**
 * putcharac - Inscribes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (success)
 */
int putcharac (char c)
{
	return (write(1, &c, 1));
}
