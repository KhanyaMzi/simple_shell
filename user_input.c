#include "shell.h"
/**
 * user_iput - prompt user iputs
 *
 * return: always 0
 */
void user_iput(char *Mystring, size_t size)
{

	if (fgets(Mystring, size, stdin) == NULL)
	{

		if (feof(stdin))
		{

			_print("\n");
			exit(EXIT_SUCCESS);
		}

		else
		{
			_print("error acured\n");
			exit(EXIT_FAILURE);
		}
	}

	Mystring[strcspn(Mystring, "\n")] '\0';
}
