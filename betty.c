#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
 *main - function to pass betty test
 *@void: no argument
 *
 *Return: returns 0 on success
 *
 */

int main(void)
{
	pid_t my_pid, my_ppid;

	my_pid = getpid();
	my_ppid = getppid();
	printf("PID is %u\nPPID is %u\n", my_pid, my_ppid);

	return (0);
}
