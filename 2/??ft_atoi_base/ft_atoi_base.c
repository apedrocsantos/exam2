int	ft_atoi_base(const char *str, int str_base)
{
	char	*base;
	int		sign;
	int		result;
	int		i;
	char	to_check;

	base = "0123456789abcdef";
	sign = 1;
	result = 0;
	i = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		to_check = *str;
		if (to_check >= 'A' && to_check <= 'Z')
			to_check += 32;
		i = 0;
		while (base[i] && i < str_base)
		{
			if (to_check == base[i])
				result = result * str_base + i;
			i++;
		}
		str++;
	}
	return (result * sign);
}
