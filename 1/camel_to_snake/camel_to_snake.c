/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 15:59:45 by anda-cun          #+#    #+#             */
/*   Updated: 2023/07/14 16:01:23 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (argv[1][i])
		{
			if (ft_isupper(argv[1][i]))
			{
				write(1, "_", 1);
				argv[1][i] += 32;
			}
			write(1, &argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}
