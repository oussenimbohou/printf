#include "main.h"

/*
 * _write_char - prints one character c at a time
 * @c: the character to be printed
 *
 * Return: on success 1
 */

int _write_char(char c)
{
	return (write(1, &c, 1));
}
