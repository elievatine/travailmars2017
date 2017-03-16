/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 16:40:06 by evatine           #+#    #+#             */
/*   Updated: 2017/03/16 10:04:14 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb != 1) || (nb >=2 && <= 13)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return (nb);
	else
	{
		return (0);
	}
}

int		main(void)
{
	printf("%d", ft_recursive_factorial(15));
	return(0);
}
