/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 20:44:39 by evatine           #+#    #+#             */
/*   Updated: 2017/03/20 20:48:26 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		is_numeric(char c)
{
	if(c > 47 && c < 58 )
		return (1);
	else
		return (0);
}

int		ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
	 	if (is_numeric(str[i]) == 0)
			return (0);
		else
		i++;
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	printf("%d\n", ft_str_is_numeric(argv[1]));
	return (0);
}
