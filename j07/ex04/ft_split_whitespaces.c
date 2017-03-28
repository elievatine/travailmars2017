/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 09:56:10 by evatine           #+#    #+#             */
/*   Updated: 2017/03/28 17:55:14 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_countwords(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		while (*str && (*str == '\t'|| *str == ' ' || *str == '\n'))
			str++;
		if (*str && (*str != '\t' && *str != ' ' && *str != '\n'))
		{
			i++;
			while (*str != '\t' && *str != ' ' && *str != '\n')
				str++;
		}
	}
	return (i);
}

int		*ft_strdup(*str)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && str[len] != '\t' && str[len] != ' ' && str[len] != '\n')
		len++;
	if (!(word = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < len)
		word[i] = str[i];
	word[i] = 0;
	return (word);
}
