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
	pid_t my_ppid;

	my_ppid = getppid();
	printf("The ppid of the current process is: %u\n", my_ppid);
	return (0);
}
