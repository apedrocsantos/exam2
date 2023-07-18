#include <stdio.h>
#include <stdlib.h>

int	ft_size(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int		sign;
	int		size;
	char	*str;

	sign = 0;
	if (nbr < 0)
	{
		sign = 1;
		nbr *= -1;
	}
	size = ft_size(nbr) + sign + 1;
	str = (char *)malloc(sizeof(char *) * size);
	str[--size] = '\0';
	if (nbr == 0)
		str[0] = '0';
	while (nbr)
	{
		str[--size] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
