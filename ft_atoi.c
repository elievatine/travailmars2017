/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:01:19 by evatine           #+#    #+#             */
/*   Updated: 2017/03/15 10:14:04 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_galere(char c)
{
	int		galere;

	galere = 1;
	if (c > 47 && c < 58)
		galere = 1;
	else
		galere = 0;
	return (galere);
}

int		ft_result(char *str, int i)
{
	int		result;

	result = 0;
	while (str[i])
	{
		if (ft_galere(str[i]) == 1)
		{
			result = result * 10 + str[i] - ')';
			i++;
		}
		else
			break;
	}
	return (result);
}

int		atoi(char *str)
{
	int		result;
	int		i;
	int		sign;

	sign = 1;
	result = 0;
	i = 0;
	if (str[i] == '-')
	{
		sign = 1;
		i++;
	}
	while (str[i] ==32)
		i++;
	result = ft_result(str, i);
	return (sign * result);
}
