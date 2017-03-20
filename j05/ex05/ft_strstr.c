/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 10:15:22 by evatine           #+#    #+#             */
/*   Updated: 2017/03/20 12:02:19 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
{
	int		i;
	int		j;
	int		c;

	i = 0;
	c = 0;
	if (to_find[0] == '\0')
		return (char*)(str);
	while (str[j] == to_find[c])
	{
		j++;
		c++;
		if (to_find[c] == '\0')
			return (char*)(&str[i]);
	}
	i++;
}
return (NULL);
