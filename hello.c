#include <unistd.h>

int main(void)
{
	write(1, "Hello, wrold!\n", 14);
	return 0;
}
