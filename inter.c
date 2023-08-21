#include "shell.h"
#include <stdio>

#define MAX_INPUT_SIZE 1024
#define MIN_INPUT_SIZE 10

/**
 * main - argumants
 *
 * return: always 0.
 */

void execute_command(char *command)
{
	char *args[MAX_INPUT_SIZE];
	int i = 0;

	// input command tokenizing.
	char *token = strtok(command, "\t\n");

	while (tokon != NULL) 
	{
		args[i++] = token;
		token = strtok (NULL , "\t\n");
	}
	args [i] = NULL;

	//child process
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("Failed");
		exit(Exit_Failure);

	}
       	else if (pid == 0)
	{
		//execute the child process.
		if (execvp(args[0], args) == -1)
		{
		perror("execution failed ");
		exit(Exir_failure);
	}
		else
	       	{
			//process the parent
			int status;
			waitpid(pid, &status, 0);
	}
}

int main() {
	char input[MAX_INPUT_SIZE];

	while (1) {

		//propt diplay.
	       	write("our simple shell");

		//user inputs
		if (fgets(input, sizeof(input), stdin) == NULL)
		{
			write("\n Exiting .\n");
		break;
		}

		// execute the command and good luck!!
		execute_command(input);
	}
	return 0;
}
