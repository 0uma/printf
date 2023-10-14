#ifndef MAIN_H
#define MAIN_H

/**
* _putchar - writes the character c to stdout
* @c: The character to be written
* Return: On success @c else -1.
*/
#include <unistd.h>

int _putchar(char c)
{
	return(write(1, &c, 1));
}

#endif
