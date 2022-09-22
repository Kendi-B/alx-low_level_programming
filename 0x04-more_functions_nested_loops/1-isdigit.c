#include "main.h"

/**
 * _isdgit - checks whether c is a digit 
 * @c: character beng checked
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
