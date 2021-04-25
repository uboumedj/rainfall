#include <stdio.h>
#include <stdlib.h>

int language = 0;

void greetuser(char *str)
{
	char buffer[88]; // or 72?

	if (language == 0)
	{
		strcpy(buffer, "Hello ");
	}
	else if (language == 1)
	{
		strcpy(buffer, "Hyvää päivää ");
	}
	else if (language == 2)
	{
		strcpy(buffer, "Goedemiddag! ");
	}
	strcat(buffer, str);
	puts(buffer);
}

int main(int argc, char **argv)
{
	char buf[40];
	char buf2[32];
	char *lang;

	if (argc != 3)
		return (1);
	bzero(buf, 72);
	strncpy(buf, argv[1], 40);
	strncpy(buf2, argv[2], 32);
	lang = getenv("LANG");
	if (lang[0] != 0)
	{
		if (memcmp(lang, "fi", 2) == 0)
			language = 1;
		else if (memcmp(lang, "nl", 2) == 0)
			language = 2;
	}
	greetuser(buf);
	return (0);
}