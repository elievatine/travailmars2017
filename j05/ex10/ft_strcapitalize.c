/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 17:02:27 by evatine           #+#    #+#             */
/*   Updated: 2017/03/21 11:17:53 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_caps(char c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

int		is_alphanum(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}

int		is_num(char c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		while (is_alphanum(str[i]) == 0)
			i++;
		if (is_caps(str[i]) == 0 && is_num(str[i]) == 0)
			str[i] -= 32;
		i++;
		while (is_alphanum(str[i]) == 1)
		{
			if (is_caps(str[i]) == 1 && is_num(str[i]) == 0)
				str[i] += 32;
			i++;
		}
	}
	return (str);
}

int		main(int argc, char *argv[])
{
	printf("%s\n", ft_strcapitalize(argv[1]));
	return (0);
}
