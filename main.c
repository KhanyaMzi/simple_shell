#include "shell.h"
/**
 * main - my simple shell
 *
 * Return: always 0
 */
int main(void)

{
	char string[90];

	while (true)
	{
		_prompt();
		user_input(string, sizeof(string));
		execute_command(string);
}

return 0;

}
