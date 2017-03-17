/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 16:18:42 by evatine           #+#    #+#             */
/*   Updated: 2017/03/17 15:20:27 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int		is_prime;
	int		i;

	i = 2;
	is_prime = 1;
	if (nb == 1 || nb == 0)
		is_prime = 0;
	while (i < (nb - 1) && is_prime == 1)
	{
		if ((nb % i) == 0)
		{
			is_prime = 0;
		}
		i++;
	}
	return (is_prime);
}

int		main(void)
{
	printf("%d", ft_is_prime(0));

	return(0);
}
