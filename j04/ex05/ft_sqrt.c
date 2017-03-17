/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 14:51:38 by evatine           #+#    #+#             */
/*   Updated: 2017/03/17 15:14:03 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		i;
	int		square;

	i = 0;
	square = 0;
	while (i < nb / 2)
	{
		square = i * i;
		if (square == nb)
			return (i);
		i++;
	}
	return (-1);
}
		
int		main(void)
{
	printf("%d", ft_sqrt(9));

	return(0);
}
