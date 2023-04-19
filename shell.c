#include "shell.h"

int line_number = 1, status = 0;
char *sname = NULL;

/**
 * main - main is used to execute commands
 * @ac: these are the number of inputs
 * @v: array of inputs
 * Return: 0, or anothe rnumber
 */
int main(__attribute__((unused))int ac, char **av)
{
	int read_bytes, separated = FALSE, a;
	size_t buffer_size = 1;
	char *buffer = NULL, *buffer_ptr, *buffer_tmp;
	char **arguments = NULL;

	shell_name = _strdup(*av);

	environ = array_cpy(environ, list_len(environ, NULL));

	signal(SIGINT, SIG_IGN);

	buffer = malloc(1);
	if (buffer == NULL)
		exit(EXIT_FAILURE);

	while (1)
	{
		if (separated == FALSE)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(STDOUT_FILENO, "my_shell$ ", 10);

			read_bytes = getline(&buffer, &buffer_size, stdin);

			if (read_bytes == -1)
				break;
			if (read_bytes == 1)
			{
				line_number++;
				continue;
			}
			buffer[read_bytes - 1] = '\0';
			buffer = input_san(buffer, &buffer_size);
			if (buffer_size == 0)
			{
				line_number++;
				continue;
			}
			buffer_ptr = buffer;
		}
		else
			buffer_ptr = buffer_tmp;

		buffer_tmp = NULL;
		args = make_array(buffer_ptr, ' ', &buffer_tmp);
		if (buffer_tmp != NULL)
			separated = TRUE;
		else
			separated = FALSE;

		a = command_manager(arguments);

		free(arguments);

		if (separated == FALSE)
			line_number;

		if (a == EXIT_SHELL)
			break;
	}
	free(buffer);
	alias_func(NULL, TRUE);
	free_array(environ);
	free(sname);

	return (status % 256);
}
