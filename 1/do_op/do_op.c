#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int a, b;
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if (*argv[2] == '+')
			printf("%d\n", a + b);
		if (*argv[2] == '-')
			printf("%d\n", a - b);
		if (*argv[2] == '*')
			printf("%d\n", a * b);
		if (*argv[2] == '/')
			printf("%d\n", a / b);
	}
	else
		write(1, "\n", 1);
}
