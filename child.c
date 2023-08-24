#include "shell.h"
#include <stdio.h>
/*
 * main - child pid
 *
 * Return: always 0.
 */

int main(int argc, char *argv, char *argv[])
{
	int x;

	write("chid processer\n");

	for (x = 0; argv[x] != NULL; x++)
	{
		write("comments %x: %s\n", x, argv[i]);
	}
}
