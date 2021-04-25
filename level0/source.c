#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
	uid_t	uid;
	gid_t	gid;
	char	*arg[2];

	if (atoi(argv[1]) == 423)
	{
		arg[0] = strdup("/bin/sh");
		arg[1] = 0;
		gid = getegid();
		uid = geteuid();
		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv("/bin/sh", arg);
	}
	else
	{
		fwrite("No !\n", 5, 1, stderr);
	}
	return (0);
}