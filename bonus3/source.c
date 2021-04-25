#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	char	buf[128];
	FILE	*file;

	file = fopen("/home/users/end/.pass", "r");
	bzero(buf, 128);
	if (argc != 2 || !file)
		return (-1);
	fread(buf, 1, 66, file);
	buf[65] = 0;
	buf[atoi(argv[1])] = 0;
	fread(&buf[66], 1, 65, file);
	fclose(file);
	if (strcmp(buf, argv[1]) == 0)
		execl("/bin/sh", "sh", 0);
	else
		puts(&buf[66]);
	return (0);
}