/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 13:46:42 by evatine           #+#    #+#             */
/*   Updated: 2017/03/25 14:09:30 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_put(char a, char b, char c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = a + 2;
			while (c <= 9)
			{
				ft_put(a, b, c);
				if (a != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			c++;
		}
		b++;
	}
	a++;
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
