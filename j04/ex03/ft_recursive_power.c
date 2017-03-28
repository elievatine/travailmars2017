/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 13:32:13 by evatine           #+#    #+#             */
/*   Updated: 2017/03/19 10:36:22 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		nb = 1;
	if (nb == 1)
		nb = 1;
	else/*(power != 1)*/
	{
		nb *= ft_recursive_power(nb, (power - 1));
	}
	return (nb);
}

int		main(void)
{
	printf("%d", ft_recursive_power(120, 40));
	return (0);
}
