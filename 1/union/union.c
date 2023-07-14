#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j = 1;
	int chars[255] = {0};
	if (argc == 3)
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				if (chars[(int)argv[j][i]] == 0)
					{
						write(1, &argv[j][i], 1);
						chars[(int)argv[j][i]] = 1;
					}
				i++;
			}
		j++;
		}

	}
	write(1, "\n", 1);
}
