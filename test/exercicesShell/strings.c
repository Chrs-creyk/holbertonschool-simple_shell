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


int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

do {
if (*s == '-')
sign *= -1;

else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');

else if (num > 0)
break;

} while (*s++);

return (num *sign);
}
