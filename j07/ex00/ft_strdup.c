/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 14:33:51 by evatine           #+#    #+#             */
/*   Updated: 2017/03/23 19:38:28 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src);

int		ft_strle(char *str)
{
	int		j;
	int		i;
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

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;
	int		size;

	size = ft_strlen(src);
	i = 0;
	cpy = malloc(sizeof(*src) * (size + 1));
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	return (cpy);
}

