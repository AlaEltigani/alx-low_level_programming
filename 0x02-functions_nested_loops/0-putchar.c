#include <stdio.h>
#include <unistd.h>


/**
 * main - Entry point
 * Return: Always 0 (sucess/correct)
 */

int main(void)

{
	char *sh = "_putchar";

	while (*sh)

	{

	        putchar(*sh);
		sh++;

	}

	 putchar('\n');


return (0);

}
