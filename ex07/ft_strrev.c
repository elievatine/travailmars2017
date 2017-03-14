/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 08:57:06 by evatine           #+#    #+#             */
/*   Updated: 2017/03/14 09:33:47 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen (char *str)
{
		int		j;
		j = 0;
		while (str != '\0')
		{
			str ++;
			j++;
		}
		return (j);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		x;

	i = 0
	j = ft_strlen(str)-1;
	while	(i < j)
	{
		x = str[i];
		str[i] = str[j]
		i++;
		j--;
	}
	return (str);
}
