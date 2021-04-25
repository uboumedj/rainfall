#include <time.h>
#include <stdio.h>
#include <stdlib.h>

char *c;

void 	m()
{
	printf("%s - %d\n", c, time(NULL));
}

int main(int argc, char **argv)
{
	FILE *file;
	char *str;
	char *str2;

	str = malloc(8);
	str[0] = 1;
	str[1] = malloc(8);
	str2 = malloc(8);
	str2[0] = 2;
	str2[1] = malloc(8);
	strcpy(str[1], argv[1]);
	strcpy(str[2], argv[2]);
	file = fopen("/home/user/level8/.pass", "r");
	fgets(c, 68, file);
	puts("~~");
	return (0);
}