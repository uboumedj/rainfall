#include <stdio.h>
#include <stdlib.h>

char *auth = 0;
char *service = 0;

int main()
{
	char buf[128];

	while (1)
	{
		printf("%p, %p \n", auth, service);
		if (!fgets(buf, 128, stdin))
			break;
		if (strncmp(buf, "auth ", 5) == 0)
		{
			auth = malloc(4);
			if (strlen(buf + 5) <= 30)
				strcpy(auth, buf + 5);
		}
		else if (strncmp(buf, "reset", 5) == 0)
		{
			free(auth);
		}
		else if (strncmp(buf, "service", 6) == 0) // so it reads "servic" apparently?
		{
			service = strdup(buf + 7);
		}
		else if (strncmp(buf, "login", 5) == 0)
		{
			if (auth[32] != 0)
				system("/bin/sh");
			else
				fwrite("Password:\n", 10, 1, stdout);
		}
	}
	return (0);
}