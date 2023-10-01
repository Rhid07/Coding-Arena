#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *ptr = NULL;
	int i;
	char str[20] = "Durodola Rhidwan";

	ptr = fopen("abc.txt", "w");
	if (ptr == NULL)
	{
		printf("error");
		exit(1);
	}

	for (i = 0; i < strlen(str); i++)
	{
		fputc(str[i], ptr);
	}

	fclose(ptr);

	return 0;
}

