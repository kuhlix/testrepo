#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("Hello, world!\n");
	write(1, "Hello, world!\n", 14);
	return 0;
}
