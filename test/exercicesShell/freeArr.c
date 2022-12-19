#include "shell.h"

void freeArr(char *arr[])
{
	int pos = 0;

	while (arr[pos])
	{
		free(arr[pos]);
		pos++;
	}
}
