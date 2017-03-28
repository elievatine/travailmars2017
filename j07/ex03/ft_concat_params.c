/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 18:02:16 by evatine           #+#    #+#             */
/*   Updated: 2017/03/28 18:51:47 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[i])
	{
		dest[dest_size] = src[i];
		i++;
		dest_size++;
	}
	dest[dest_size] = '\0';
	return (dest);
}
char	ft_concat_params(int argc, char **argv)
{
	char	*tab;
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (!(tab = (char *)malloc(sizeof(char) * (argc - 1))))
		return (0);
	while (i < argc)
	{
		ft_strcat(tab, argv[i]);
		if (i < argc - 1)
			ft_strcat(tab, '\n');
		i++;
		j++;
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	printf("%s\n", ft_concat_params(argc, argv));
	return (0);
}
