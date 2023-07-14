#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: prints the specified sizes to the screen.
  * Return: zero
  */

int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: 4 byte(s)\n", sizeof(int));
printf("Size of a long int: 8 byte(s)\n", sizeof(long int));
printf("Size of a long long int: 8 byte(s)\n", sizeof(long long int));
printf("Size of a float: 4 byte(s)", sizeof(float));
return (0);
}
