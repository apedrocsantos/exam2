/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 15:31:57 by anda-cun          #+#    #+#             */
/*   Updated: 2023/07/14 15:32:13 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if (ft_isupper(argv[1][i]))
				argv[1][i] += 32;
			else if (ft_islower(argv[1][i]))
				argv[1][i] -= 32;
			write(1, &argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}
