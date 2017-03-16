/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 10:18:49 by evatine           #+#    #+#             */
/*   Updated: 2017/03/16 11:25:24 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int		result;
	int		i;

	i = 0;
	result = nb;
	if (power >= 2 && power <=12)
	{
		while (i < (power - 1))
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
		else 
			return (0);
}

int		main(void)
{
	printf("%d", ft_iterative_power(14, 2));

		return(0);
}
