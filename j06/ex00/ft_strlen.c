/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 16:41:14 by evatine           #+#    #+#             */
/*   Updated: 2017/03/15 17:47:12 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
