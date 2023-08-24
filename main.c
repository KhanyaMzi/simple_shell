#include "shell.h"
#include <unistd.h>

/**
 * main - starting point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 on success, 1 on fail
 */
int main(int ac, char **av)
{
	info_t info[] = { INFO_INIT };
	int y = 2;

	asm ("mov %1, %0\n\t"
			"add $3, %0"
			: "=r" (y)
			: "r" (y));

	if (ac == 2)
	{
		y = open(av[1], O_RDONLY);
		if (y == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				_eputs(av[0]);
				_eputs(": 0: Can't open ");
				_eputs(av[1]);
				_eputchar('\n');
				_eputchar(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->ready = y;
	}
	populate_env_list(info);
	read_history(info);
	hsh(info, av);
	return (EXIT_SUCCESS);
}
