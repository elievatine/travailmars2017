/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 10:20:39 by evatine           #+#    #+#             */
/*   Updated: 2017/03/21 11:16:07 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_print(char c)
{
	if (c > 32 && c < 127)
		return (1);
	else
		return (0);
}

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (is_print(str[i]) == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	printf("%d\n", ft_str_is_printable(argv[1]));
	return (0);
}
