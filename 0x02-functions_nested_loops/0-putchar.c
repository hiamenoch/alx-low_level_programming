#include "main.h"

/**
*main - prints putchar
*
*Return: 0 on success execution.
*/

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
