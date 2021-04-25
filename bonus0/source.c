#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void p(char *str, char *sp)
{
	char buf[4096];

	puts(sp);
	read(0, buf, 4096);
	*strchr(buf, '\n') = 0;
	strncpy(str, buf, 20);
}

void pp(char *buf)
{
	char str[20];
	char str2[20];

	p(str, " - ");
	p(str2, " - ");
	strcpy(buf, str);
	buf[strlen(buf)] = ' ';
	strcat(buf, str2);
}

int main(int argc, char **argv)
{
	char buf[54];

	pp(buf);
	puts(buf);
	return (0);
}