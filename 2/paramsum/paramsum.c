#include <unistd.h>

void	ft_putnbr(int nb)
{
	int nbr;

	if (nb < 10)
	{
		nbr = nb + '0';
		write(1, &nbr, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}

	int main(int ac, char **av)
	{
		av++;
		ft_putnbr(ac - 1);
		write(1, "\n", 1);
	}
