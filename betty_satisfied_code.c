#include "main.h"
#include "shell.h"

/**
 * main - Entry point
 * Beautiful code that passes the Betty checks
 *
 * Return: Always 0 - Success
 */
int main(void)
{
	int i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i++]);
	}

	return (0);
}
