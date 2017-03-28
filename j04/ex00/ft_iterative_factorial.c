/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 16:02:14 by evatine           #+#    #+#             */
/*   Updated: 2017/03/18 21:05:54 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		factoriel;
	int		x;

	x = 1;
	factoriel = nb;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb >= 2 && nb <= 12)
	{
		while (x < (nb - 1))
		{
			factoriel = factoriel * (nb - x);
			x++;
		}
		return (factoriel);
	}
	else
		return (0);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(-1));
	return (0);
}
