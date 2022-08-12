#include <stdio.h>
/**
 * before_main - function executed before the main.
 * Return: no return.
 */
void _attribute_((constructor)) before_main(void)
{
	printf("You`re beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
