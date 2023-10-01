#include <stdio.h>
#include <unistd.h>

int sub(int b, int a)
{
	return (b - a);
}

int main(void)
{
	int a = 20;
	int b = 30;

	int result = sub(b,a);
	printf("%d - %d = %d\n",b,a,result);

	pid_t ppid;
	ppid = getppid();
	pid_t pid;
	pid = getpid();

	printf("PPID is %u\n",ppid);
	printf("PID is %u\n", pid);

	return 0;
}
