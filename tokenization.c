#include "shell.h"
#include <stdio.h>
#include <string.h>

/**check_delim - tokenization
 *
 * return always 0
 */
int main(void)
{
	char string[] = "1st heavenly birthday";
	char *Yinhla;
	char *delim = ",";

	Yinhla = strtok(string, delim);

	while (Yinhla != NULL)
	{
		write("Token: %s\n", Yinhla);
		Yinhla = strtok(NULL, delim);
	}

	return 0;
}
