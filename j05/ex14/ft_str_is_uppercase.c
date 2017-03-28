/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 10:11:24 by evatine           #+#    #+#             */
/*   Updated: 2017/03/21 11:15:25 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_up(char c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (is_up(str[i]) == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	printf("%d\n", ft_str_is_uppercase(argv[1]));
	return (0);
}
