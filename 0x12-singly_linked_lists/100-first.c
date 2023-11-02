#include <stdio.h>
void __attribute__((constructor)) start_up();
/**
 * start_up - constructor func that executes before main
 */
void start_up(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
/**
 * end - set up a function for execution at the end of main
 */
void __attribute__((destructor)) end();
