#include <stdlib.h>
#include <stdio.h>

int m;

void o()
{
	system("/bin/sh");
	exit(1);
}

void n()
{
	char buf[512];

	fgets(buf, 512, stdin);
	printf(buf);
	exit(1);
}

int main()
{
	n();
	return (0);
}