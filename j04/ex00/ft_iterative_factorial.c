/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 16:02:14 by evatine           #+#    #+#             */
/*   Updated: 2017/03/15 16:29:15 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_iterative_factorial(int nombre)
{
	int		factoriel;
	int		x;

	x = 1;
	factoriel = nombre;
	while (x < (nombre - 1))
	{
		factoriel = factoriel * (nombre - 1);
		x++;
	}
	return (factoriel);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return(0);
}
