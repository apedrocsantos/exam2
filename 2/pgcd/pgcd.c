#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	i;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		if (a > b)
			i = b;
		else
			i = a;
		while (i)
		{
			if (a % i == 0 && b % i == 0)
				break ;
			i--;
		}
		printf("%d", i);
	}
	printf("\n");
}
