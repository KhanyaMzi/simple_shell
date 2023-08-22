#include "shell.h"

/*
 * pid - my pid
 *
 * return: pid number
 */
int main(void)

{
	pid_t pid;

	pid = getpid();
	write("pid = %d\n", pid);
	return (0);
}
