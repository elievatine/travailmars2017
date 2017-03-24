/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 08:50:20 by evatine           #+#    #+#             */
/*   Updated: 2017/03/23 11:18:14 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
				i++;
	}
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	int		res;

	res = 0;
	i = 0;
	if (s1[0] == '\0' || s2[0] == '\0')
		return (s1[0] - s2[0]);
	while (i < n)
	{
		while (s1[i])
		{
			if (s1[i] > s2[i])
				return (-(s2[i] - s1[i]));
			else if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	}
	return (res);
}

int main()
{
	char s1[] = "String1";
	char s2[] = "Vtring1";
	char s3[] = "Atring";
	int i;
	int j;
	int n;
	char *array;

	j = 0;
	i = 0;
	n = 1;
	while (s1[i] != '\0')
	{
		array[j] = ft_strncmp(&s1[i], &s2[j], n); // comp between s1 & s2
		i++;
		j++;
	}
	printf("%s\n", s1);
	printf("%s", s2);

	return 0;
	
}
/*
s1 = Z
s2 = B
s3 = L
s4 = W
s5 = G
array[]
array2[]

array = {Z, B, L, W, G}
array = {0, 1, 2, 3, 4}

j = i + 1
swp1 = array[i]
swp2 = array2[j]

tant i < arraylength
si array[0] < array[1]
alors array[0] = array[i]
sinon array[1] = array[j]

array[i] + 1; 

*/

/*
int		main(int argc, char **argv)
{
	char	a;
	int		i;
	int		j;
	int		temp;
	char	n;
	char	b;

	a = *argv;
	b = *argv + 1;
	j = -1;
	i = 0;
	n = 1;
	while(a)
		i++;
	while(++j < n)
	{
		while(++i < n)
		{
			if (ft_strncmp(a, b, n) < 0)
			{
				temp = a [i];
				a [i] = a [i + 1];
				a [i + 1] = temp;
			}
		}
	}
	return(0);

	while (i < n)
			i++;
	printf ("%d\t", i);
	return(a[argc]);
}*/
