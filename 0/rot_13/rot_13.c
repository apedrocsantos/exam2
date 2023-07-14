/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 15:17:04 by anda-cun          #+#    #+#             */
/*   Updated: 2023/07/14 15:17:30 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	start_small(char c)
{
	return (c >= 'a' && c <= 'm');
}

int	end_small(char c)
{
	return (c >= 'n' && c <= 'z');
}
int	start_big(char c)
{
	return (c >= 'A' && c <= 'M');
}

int	end_big(char c)
{
	return (c >= 'N' && c <= 'Z');
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (start_small(argv[1][i]) || start_big(argv[1][i]))
				argv[1][i] += 13;
			else if (end_small(argv[1][i]) || end_big(argv[1][i]))
				argv[1][i] -= 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
