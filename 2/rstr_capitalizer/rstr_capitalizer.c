#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			while (*av[i])
			{
				if (*av[i] >= 'A' && *av[i] <= 'Z')
					*av[i] += 32;
				if ((*av[i] >= 'a' && *av[i] <= 'z') && (!*(av[i] + 1)
						|| *(av[i] + 1) == ' ' || *(av[i] + 1) == '\t'))
					*av[i] -= 32;
				write(1, av[i], 1);
				av[i]++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
