#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	char buf[40];
	int i;

	i = atoi(argv[1]);
	if (i > 9)
		return (1);
	else
	{
		memcpy(buf, argv[2], i * 4);
		if (i == 1464814662) // 0x574f4c46
			execl("/bin/sh", "sh", 0);
	}
	return (0);
}