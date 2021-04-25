#include <stdio.h>
#include <stdlib.h>

int m = 0;

void v()
{
	char buf[512];

	fgets(buf, 512, stdin);
	printf(buf);
	if (m == 64)
	{
		fwrite("Wait what?!", 12, 1, stdout);
		system("/bin/sh");
	}
}

int main()
{
	v();
	return (0);
}