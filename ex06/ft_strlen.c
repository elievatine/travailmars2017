/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 16:41:14 by evatine           #+#    #+#             */
/*   Updated: 2017/03/13 18:32:14 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;
	int		j;
	char	c;

	j = 0;
	c = str[0];
	i = 1;
	while (c != '\0')
	{
		c = str[i];
		i++;
		j++;
	}
	return (j);
}

int		main(void)
{
	printf("%d", ft_strlen("Falafel"));
	return (0);
}
