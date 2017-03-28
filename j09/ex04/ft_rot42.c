/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:39:42 by evatine           #+#    #+#             */
/*   Updated: 2017/03/17 11:29:47 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] - 65;
			str[i] = ((str[i] + 42) % 26);
			str[i] = str[i] + 65;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 97;
			str[i] = ((str[i] + 42) % 26);
			str[i] = str[i] + 97;
		}
		i++;
	}
	return (str);
}
