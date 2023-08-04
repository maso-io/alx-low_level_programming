#include <stdio.h>
int main(void)
{
    int a = 0;
    int b = 3;
	int c;
    for (a = 1; a < b + 1; a++)
	{
		for (c = 0; c < a; c++)
				printf("a = %d c = %d ", a, c);
		printf("\n");
	}

return (0);
}

