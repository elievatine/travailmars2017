/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 19:28:26 by evatine           #+#    #+#             */
/*   Updated: 2017/03/21 11:11:15 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_alpha(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

int		ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (is_alpha(str[i]) == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	printf("%d\n", ft_str_is_alpha(argv[1]));
	return (0);
}
