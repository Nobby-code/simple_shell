#include "shell.h"

int main()
{
	char *args[50];
	char input_str[100];

	char *quit_val;

	int pid, i;

	i = 0;
	quit_val = "exit";

	while (1)
	{
		printf("$ ");
		fgets(input_str, sizeof(input_str), stdin);

		args[0] = strtok(input_str, "\n\0");

		while (args[i] != NULL)
		{
			i++;
			args[i] = strtok(NULL, "\n\0");
		}

		if (strcmp(args[0], quit_val) == 0)
		{
			printf("Exiting the shell..\n");
			break;
		}

		pid = fork();

		if (pid > 0)
		{
			wait((int *) 0 );
		}
		else
		{
			int error_check;

			error_check = execvp(args[0], args);

			if (error_check == -1)
			{
				printf("%s: No such file or diectory\n", input_str);
			}
		}
	}

	return (0);
}
