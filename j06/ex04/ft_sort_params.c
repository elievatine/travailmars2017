/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 12:09:57 by evatine           #+#    #+#             */
/*   Updated: 2017/03/23 14:20:22 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
int		main(int argc, char **argv)
{
	int i;
	int j;
	int arg;
	char *tmp;

	i = 0;
	arg = argc - 1;
	while (arg > 0)
	{
		if (ft_strcmp(argv[arg], argv[arg - 1]) < 0)
		{
			tmp = argv[arg - 1];
			argv[arg -1] = argv[arg];
			argv[arg] = tmp;
			arg = argc - 1;
		}
		else
			arg--;
	}
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

