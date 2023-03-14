#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function returns a pointer to a new string,
 * which is a duplicate of the string
 * @str: string to be used.
 * Return: always 0
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *str1;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	str1 = malloc(sizeof(char) * (len + 1));

	if (str1 == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		str1[i] = str[i];
	}
	return (str1);

	free(str1);
}
