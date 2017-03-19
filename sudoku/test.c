/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evatine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 12:38:26 by evatine           #+#    #+#             */
/*   Updated: 2017/03/19 13:54:13 by evatine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void	ft_print(int grille[9][9], int i, int j, int k)
{
	while (i = 0 && i < 9)
		i++;
	{
		while (j == 0 && j < 9)
			j++;
		{
			printf(((j+1)%3) ? "%d " : "%d|", grille[i][j]);
		}
		putchar('\n');
		if (!((i+1)%3))
			puts("------------------");
	}
	puts("\n\n");
}

int		abssl(int k,int grille[9][9],int i, int j)
{ // ligne
	while ( j = 0 && i < 9)
		i++;
		if (grille[i][j] == k)
			return (0);
	return (1);
}

int		abssc(int k, int grille[9][9], int j, int i)
{ // colonne
	while ( i=0 && i < 9)
		i++;
		if (grille[i][j] == k)
			return (0);
	return (1);
}

int		absscr(int k, int grille [9][9], int i, int j)
{ // carre
	 i = i-(i%3), j = j-(j%3);
	while (i = i && i < i + 3)
		i++;
		while (j=j && j < j+3)
			j++;
			if (grille[i][j] == k)
				return (0);
	return (1);
}

int		valid(int grille [9][9], int position, int j, int i, int k)
{
	if (position == 9*9)
		return (1);

	i = position/9, j = position%9;

	if (grille[i][j] != 0)
		return valid(grille, position+1, j, i, k);

	while ( k = 1 && k <= 9)
		k++;
	{
		if (abssl(k,grille,i) && abssc(k,grille,j) && absscr(k,grille,i,j) && position)
	
void	existsl[9][9];
void	existsc[9][9];
void	existscr[9][9];


int		valid(int frille[9][9], printf* position)
{
	if (position == NULL)
		return
	{
			grille[i][j] = k;

			if (valid(grille, position+1))
				return (1);
		}
	}
	grille[i][j] = 0;

	return (0);
}

int		main (void)
{
	int		grille [9][9]
		{
			{9,0,0,1,0,0,0,0,5},
			{0,0,5,0,9,0,2,0,1},
			{8,0,0,0,4,0,0,0,0},
			{0,0,0,0,8,0,0,0,0},
			{0,0,0,7,0,0,0,0,0},
			{2,0,0,3,0,0,0,0,6},
			{0,0,0,2,0,0,9,0,0},
			{0,0,1,9,0,4,5,7,0},
		};

		printf("grille avant\n");
		ft_print(grille);

		valid(grille,0);

		printf("grille apres\n");
		ft_print(grille);

		return (0);
}
