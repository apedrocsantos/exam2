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
	int	dif;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			dif = 0;
			if (ft_islower(argv[1][i]))
			{
				dif = argv[1][i] - 'a';
				argv[1][i] = 'z' - dif;
			}
			else if (ft_isupper(argv[1][i]))
			{
				dif = argv[1][i] - 'A';
				argv[1][i] = 'Z' - dif;
			}
			write(1, &argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}
