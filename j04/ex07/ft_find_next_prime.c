/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 16:53:39 by evatine           #+#    #+#             */
/*   Updated: 2017/03/19 10:31:49 by evatine          ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}

int		main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	return (0);
}
