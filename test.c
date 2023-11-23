#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void print_int(int num)
{
	char digit;

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num / 10)
		print_int(num / 10);
	digit = num % 10 + '0';
	write(1, &digit, 1);
}

int _prints(char *s, int len)
{
	if (*s == '\0')
		return (len);
	write(1, s, 1);
	return (_prints(++s, len + 1));
}
/**
 * checkType - check if the type is for 0x, 0c or int
 * @n: number to check, which catagory it should fall into
 *
 * Return: int, 1 - int, 2 - 0x, 3 - 0c
 */
int checkType(int n)
{
	int tmp;
	int numDigits;
	char *s_num;

	tmp = n;
	numDigits = 0;
	while (tmp / 10)
	{
		tmp /= 10;
		numDigits++;
	}
	s_num = (char *)malloc(sizeof(char) * numDigits) + 1;
	if (!s_num)
		return (-1);
	sprintf(s_num, "%d", n);

	if (s_num[1] == 'x')
		return (2);
	else if (s_num[1] == 'c')
		return (3);
	else
		return (1);
}

int main(void)
{
	int check_T;
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
	check_T = checkType(b);
	if (check_T == 1)
		print_int(b);
	_prints("\nVING RHAMES\n", 0);
	return (0);
}

