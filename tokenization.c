#include "shell.h"
#include <stdio.h>
#include <string.h>

/**check_delim - tokenization
 *
 * return always 0
 */
int main(void)
{
	char Mystring[] = "1st heavenly birthday";
	char *Yinhla;
	char *delim = ",";

	Yinhla = strtok(Mystring, delim);

	while (Yinhla != NULL)
	{
		write("Token: %s\n", Yinhla);
		Yinhla = strtok(NULL, delim);
	}

	return 0;
}
