/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 09:55:17 by evatine           #+#    #+#             */
/*   Updated: 2017/03/21 11:14:44 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_low(char c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (is_low(str[i]) == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	printf("%d\n", ft_str_is_lowercase(argv[1]));
	return (0);
}
