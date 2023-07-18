#include <stdio.h>
#include <stdlib.h>

int	is_prime(int nb)
{
	int	i;

	i = 2;
	while (i * i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	nb;
	int	i;

	i = 2;
	if (ac == 2)
	{
		nb = atoi(av[1]);
		if (nb == 1)
			printf("1");
		while (nb > 1)
		{
			if (nb % i == 0 && is_prime(i))
			{
				printf("%d", i);
				if (nb / i != 1)
					printf("*");
				nb /= i;
			}
			else
				i++;
		}
	}
	printf("\n");
}
