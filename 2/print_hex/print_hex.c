#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
		result = result * 10 + *(str++) - '0';
	return (result);
}

void	ft_putbase(int nb)
{
	char	*base;

	base = "0123456789abdef";
	if (nb < 16)
		write(1, &base[nb], 1);
	else
	{
		ft_putbase(nb / 16);
		ft_putbase(nb % 16);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putbase(ft_atoi(av[1]));
	write(1, "\n", 1);
}
