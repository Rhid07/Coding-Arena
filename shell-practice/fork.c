#include <stdio.h>
#include <unistd.h>

int main(void)
{

	printf("i was one before fork\n");
	
	pid_t pid;
	
	pid_t ppid;
	
	pid = fork();
	
	if (pid == -1)
		{
			perror("fork failed");
			return 1;
		}
	if(pid == 0)
	{
		sleep(10);
		pid = getpid();
		printf("i am two after fork\n");
		printf("child PID is %u\n",pid);
	}

	else
	{
		ppid = getppid();
		printf("i am the parent process\n");
		printf("PPID is %u\n",ppid);
	}
	return 0;
}
