#include "shell.h"
/**
 * main - my simple shell
 *
 * Return: always 0
 */

int main(void)

{
	char Mystring[90];

	while (true)
	{
		display_prompt();
		user_input(Mystring, sizeof(Mystring));
		execute_command(Mystring);
}

return 0;

}
