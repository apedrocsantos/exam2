#include <stdio.h>
#include <stdlib.h>

int	ft_wc(char *str)
{
	int	words;

	words = 0;
	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (*str)
			words++;
		while (*str && !(*str == ' ' || *str == '\t' || *str == '\n'))
			str++;
	}
	return (words);
}

char	**ft_split(char *str)
{
	char	**arr;
	int		wc;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	j = 0;
	wc = ft_wc(str);
	arr = (char **)malloc(sizeof(char **) * (wc + 1));
	arr[wc] = NULL;
	while (i < wc)
	{
		while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
			j++;
		k = j;
		while (str[k] && !(str[k] == ' ' || str[k] == '\t' || str[k] == '\n'))
			k++;
		arr[i] = (char *)malloc(sizeof(char *) * ((k - j) + 1));
		arr[i][k - j] = '\0';
		k = 0;
		while (str[j] && !(str[j] == ' ' || str[j] == '\t' || str[j] == '\n'))
			arr[i][k++] = str[j++];
		i++;
	}
	return (arr);
}
