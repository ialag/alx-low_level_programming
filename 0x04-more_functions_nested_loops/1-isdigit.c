#include "main.h"
/**
 * _isdigit - Checks if a caracter is digit
 * @x: The number
 * Return: 1 for a character that will be digit or 0 for else
*/
int _isdigit(int x)
{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}
