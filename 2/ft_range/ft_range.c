#include <stdio.h>
#include <stdlib.h>

int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	*ft_range(int start, int end)
{
	int	len;
	int	*result;

	if (start * end < 0)
		len = ft_abs(end) + ft_abs(start) + 1;
	else
		len = ft_abs(end) - ft_abs(start) + 1;
	result = (int *)malloc(sizeof(int *) * len);
	while (--len >= 0)
	{
		if (start < end)
			result[len] = end--;
		else
			result[len] = end++;
	}
	return (result);
}
