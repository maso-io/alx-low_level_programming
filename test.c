#include <stdio.h>

int main(void)
{
	int c;
	int a = 0;
	int b = 3;
	unsigned int len1 = sizeof("Best ");
	unsigned int len2 = sizeof("School");
	for (a = 1; a < b + 1; a++)
	{
		for (c = 0; c < a; c++)
				printf("a = %d c = %d ", a, c);
		printf("\n");
	}

	printf("mem- test......  len1: %d\tlen2: %d\n", len1, len2);

	return (0);
}

