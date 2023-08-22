#include "shell.h"
#include <stdio>
/**
 * check_delime - check string
 * @str: string
 * Return: 0 on fail , 1 on success
 */
unsigned int check_delime(char c, const char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (c == str[i])
			return (1);
	}
	return (0);
}

/**
 * _strtok - we use it to extracts tokens of a string
 * @str: string
 * @delime: delimiter
 * Return: to next token or NULL
 */
char *_strtok(char *str, const char *delim)
{
	static char *tokens;
	static char *new_token;
	unsigned int i;

	if (str != NULL)
		new_token = str;
	tokens = new_token;
	if (tokens == NULL)
		return (NULL);
	for (i = 0; tokens[i] != '\0'; i++)
	{
		if (check_delime(tokens[i], delime) == 0)
			break;
	}
	if (new_token[i] == '\0' || new_token[i] == '#')
	{
		new_token = NULL;
		return (NULL);
	}
	tokens = new_token + i;
	new_token = tokens;
	for (i = 0; new_token[i] != '\0'; i++)
	{
		if (check_delime(new_token[i], delime) == 1)
			break;
	}
	if (new_token[i] == '\0')
		new_token = NULL;
	else
	{
		new_token[i] = '\0';
		new_token = new_token + i + 1;
		if (*new_token == '\0')
			new_token = NULL;
	}
	return (tokens);
}
