#include <stdio.h>
#include <unistd.h>

int add(int a,int b)
{
return a + b;
}

int main(void)
{
	int a = 20;
	int b = 30;

	pid_t pid;
	pid_t ppid;
	pid = getpid();
	ppid = getppid();

	int sum = add(a,b);
	printf("%d\n",sum);
	printf("process id is %u\n",pid);
	printf("Parent process id is %u\n",ppid);
	
	return 0;
}
