/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 16:40:06 by evatine           #+#    #+#             */
/*   Updated: 2017/03/15 16:44:08 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb != 1)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

int		main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return(0);
}
