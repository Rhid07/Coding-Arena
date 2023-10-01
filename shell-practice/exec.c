#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>


int main(void)
{
	pid_t pid;
	int val = 0;
	char *argv[] = {"/bin/ls", "-l", NULL};
	
	pid = fork();
	
	if (pid == -1)
		return -1;
	if (pid == 0)
	
	val = execve(argv[0], argv, NULL);

	if (val == -1)
		perror ("error");
	printf("done with execution\n");
	return 0;
}
