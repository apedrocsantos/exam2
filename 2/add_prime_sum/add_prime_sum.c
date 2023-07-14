#include <stdio.h>
#include <unistd.h>

int	is_prime(int nb)
{
	int	i;

	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

void	ft_putchar(int nb)
{
	char	c;

	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putchar(nb / 10);
		ft_putchar(nb % 10);
	}
}

int	main(int ac, char **av)
{
	int	nb;
	int	i;
	int	result;

	i = 1;
	result = 0;
	if (ac > 1)
	{
		nb = ft_atoi(av[1]);
		while (++i <= nb)
			if (is_prime(i))
			{
				result += i;
			}
		ft_putchar(result);
	}
	write(1, "\n", 1);
}
