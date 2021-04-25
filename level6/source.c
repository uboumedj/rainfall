#include <stdio.h>
#include <stdlib.h>

void n()
{
	system("/bin/cat /home/user/level7/.pass");
}

void m()
{
	puts("Nope");
}

int main(int argc, char **argv)
{
	char *str;
	void (*f)();

	str = (char*)malloc(64);
	f = malloc(4);
	f = &m;
	strcpy(str, argv[1]);
	f();
	return (0);
}
