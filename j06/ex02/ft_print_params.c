/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 10:24:59 by evatine           #+#    #+#             */
/*   Updated: 2017/03/22 10:38:51 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		z;

	i = 1;
	z = 0;
	while (i < argc)
	{
		while(argv[i][z])
		{
			ft_putchar(argv[i][z]);
				z++;
		}
		ft_putchar('\n');
			z = 0;
		i++;
	}	
}
