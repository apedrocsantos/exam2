#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*out;
	int		i;

	i = 0;
	while (str[i])
		i++;
	out = (char *)malloc(sizeof(char *) * i + 1);
	out[i] = '\0';
	while (i-- >= 0)
		out[i] = str[i];
	return (out);
}
