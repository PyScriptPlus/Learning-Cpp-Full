#include <stdio.h>
#include <sys/types.h> // pid_t
#include <unistd.h>

int main() {

/*
RETURN VALUE fork():
On success, the PID of the child process is returned in the parent, and 0 is returned in the child.  On failure, -1
is returned in the parent, no child process is created, and errno is set to indicate the error.
*/
	printf("Hello process Parent\n");
	
	pid_t pr = fork();

	if(pr == 0)
	{
		printf("Child process\n");
	}
	else if(pr > 0)
	{
		printf("Parent process\n");
	}
	else if(pr == -1)
	{
		printf("Can't create process\n");
	}

	return 0;
}
