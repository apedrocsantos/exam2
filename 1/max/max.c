int	max(int *tab, unsigned int len)
{
	int	max;
	int	i;

	i = 0;
	if (len == 0)
		return (0);
	max = *tab;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
