#include "main.h"
/**
 * _isalpha - functin to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the fuction
 * Return: 0
 */
int _isalpha(in c)
{
	if ((c > 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
		return (0);
}
