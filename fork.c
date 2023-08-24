#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	pid_t pid;

	write("Beore the fork\n");
	pid = fork();
	if (pid == -1)
	{
		perror("Error occured:");
		return (1);
	}
	write("After the fork\n");
	m_pid = getpid();
	write("My pid is %u\n", my_pid);
	return (0);
}
