#include <unistd.h>

int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}
int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (ft_isupper(argv[1][i]) || ft_islower(argv[1][i]))
			{
				if (argv[1][i] == 'z' || argv[1][i] == 'Z')
					argv[1][i] -= 25;
				else
					argv[1][i] += 1;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
