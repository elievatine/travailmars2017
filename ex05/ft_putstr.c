/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:17:43 by evatine           #+#    #+#             */
/*   Updated: 2017/03/13 16:28:08 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
		write( 1, &c , 1);
}
void	ft_putstr(char *str)
{
		int		i;
		char	c;

		i = 0;
		while (str[i])
		{
			ft_putchar(str[i]);
			c = (*str + i);
			i++;
		}
}

int	main()
{
	ft_putstr("Falafel");
	return(0);
}
