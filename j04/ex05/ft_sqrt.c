/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 14:51:38 by evatine           #+#    #+#             */
/*   Updated: 2017/03/19 10:26:13 by evatine          ###   ########.fr       */
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
	return (0);
}

int		main(void)
{
	printf("%d", ft_sqrt(53703821));
	return (0);
}
