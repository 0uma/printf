#include <unistd.h>
/**
* _putchar - writes the character c to stdout
*
* @c: The character to be written
*
* Description: A programmer-defined _putchar function
*
* Return: On success @c else -1.
*/

/* Function _putchar defination */

char _putchar (char c)
{
	return (write(1, &c, 1));
}
