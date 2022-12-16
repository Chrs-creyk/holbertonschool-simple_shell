#include "shell.h"

int _strlen(char *s)
{
int length = 0;

while (*s++)
length++;

return (length);
}

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

#include "shell.h"

int _strlen(char *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	if (!s)
		return (len);
	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
