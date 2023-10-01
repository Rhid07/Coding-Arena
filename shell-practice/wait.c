#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main()
{
	pid_t ppid;
	pid_t pid;

	pid = fork();

	if (pid == -1)
	{
		perror("fork failed");
		return 1;
	}

	if (pid == 0)
	{
		pid = getpid();
		printf("i am the child process\n");
		printf("my PID is %u\n",pid);
	}
	else
	{
		wait(NULL);
		sleep(10);
		ppid = getppid();
		printf("i am the parent\n");
		printf("my PPID is %u\n",ppid);
	}
	return 0;
}
