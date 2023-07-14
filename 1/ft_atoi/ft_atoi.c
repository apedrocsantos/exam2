#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}
