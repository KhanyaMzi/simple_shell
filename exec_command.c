 #include "shell.h"
/**
 * exec_command - to execute the command
 *
 * Return: pointer of string or NULL on Failure.
 */
void exec_command(const char *string);
{
	pid_t child_pid = fork();

	if (child_pid == -1)

	{
		perror("fork failed");
			exit(EXIT_FAILURE);
	}

	else if (child_pid == 0)

	{
		execlp(string, string, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else

		{
			wait(NULL);
		}
}
#include "shell.h"
/**
 * main - tokenize
 *
 * Return: pointer to string or NULL on Failure.
 */
void exec_command(const char *string);

	pid_t child_pid = fork();
{
	if (child_pid == -1)
	{
		_print("forking procss failure\n");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[90];
		int arg_count = 0;

		char *token = strtok((char *)string, " ");

		while (token != NULL)
		{
			arg[arg_count++] = token
				token = strtok(NULL, " ");
		}
		execvp(args[0], args);

		_print("executing error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
