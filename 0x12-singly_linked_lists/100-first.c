#include <stdio.h>

/**
 * printBeforeMain - executes before the entry point
 */

__attribute__((constructor))
void printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
