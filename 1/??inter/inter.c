/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:52:03 by anda-cun          #+#    #+#             */
/*   Updated: 2023/07/14 16:55:42 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char c, char *str, int ref)
{
	int	i;

	i = -1;
	while (i < ref)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = -1;
	if (argc == 3)
	{
		while (argv[1][++i])
		{
			if (ft_strcmp(argv[1][i], argv[1], i))
			{
				j = -1;
				while (argv[2][++j])
				{
					if (argv[1][i] == argv[2][j])
					{
						write(1, &argv[1][i], 1);
						break ;
					}
				}
			}
		}
	}
	write(1, "\n", 1);
}
