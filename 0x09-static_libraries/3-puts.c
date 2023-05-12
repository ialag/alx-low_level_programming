#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to stdout
 * @str: The string to be printed
 * Description: This function 'str' to the standard output (stdout).
 * It does not return any value.
*/
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
puts("\"Programming is like building a multilingual puzzle");
return (0);
}
