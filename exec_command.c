#include "shell.h"
/**
 * exec_command - to execute the command
 *
 * return 0
 */
void exec_command(const char *string)
{
	pid_t child_pid = fork();

	if (child_pid == -1);

	{
		perror("fork failed");
	       	exit(EXIT_FAILURE);
	}
	else if (child_pid == 0);
	{
		execlp(string, string, (char *)NULL);
		perror("execlp");
	       	exit(EXIT_FAILURE);
	}
	       	else{
		       	wait(NULL);
		}
}
