#include <stdio.h>
#include <stdlib.h>

char *p()
{
	void *addr;
	char buf[64];

	fflush(stdout);
	gets(buf);
	addr = (&buf + 80);
	if ((unsigned int)addr & 0xb0000000 == 0xb0000000)
	{
		printf("(%p)\n", addr);
		exit(1);
	}
	puts(buf);
	return (strdup(buf));
}

int main()
{
	p();
	return (0);
}