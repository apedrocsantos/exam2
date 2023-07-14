#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	pow;

	pow = 2;
	if (n == 1)
		return (1);
	while (pow <= n)
	{
		if (pow == n)
			return (1);
		pow *= 2;
	}
	return (0);
}
